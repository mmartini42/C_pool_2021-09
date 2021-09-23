/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:58:46 by rblondia          #+#    #+#             */
/*   Updated: 2021/09/19 19:09:40 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

char	*ft_get_nbr(char *str)
{
	int		size;
	char	*nb = NULL;
	int		i;

	size = 0;
	i = -1;
	while (str[++i] && str[i] >= '0' && str[i] <= '9')
		size++;
	nb = malloc(sizeof(char) * size + 1);
	if (!nb)
		return (NULL);
	ft_strncpy(nb, str, size, 0);
	return (nb);
}

int	ft_get_size(char *str, int *start)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != ':')
	{
		if (str[i] == ':')
			break ;
		i++;
	}
	i++;
	while (str[i] == ' ')
	{
		if (str[i] != ' ')
			break ;
		i++;
	}
	*start = i;
	while (str[i++])
		count++;
	return (count);
}

char	*ft_get_value(char *str)
{
	int		start;
	char	*dest;
	int		size;

	size = ft_get_size(str, &start);
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	ft_strncpy(dest, str, ft_strlen(str), start);
	return (dest);
}

struct s_number	ft_get_elem(char *str)
{
	t_number	nbr;

	nbr.id = ft_get_nbr(str);
	nbr.value = ft_get_value(str);
	return (nbr);
}

struct s_number	*parse_all(t_data *data)
{
	int			i;
	t_number	*tmp;

	tmp = malloc(sizeof(t_number) * (data->nb_line + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < data->nb_line)
	{
		tmp[i] = ft_get_elem(data->lines[i]);
		i++;
	}
	tmp[i].id = 0;
	tmp[i].value = 0;
	return (tmp);
}

/* int main(void)
{
	t_data data;
	t_number *bdd;
	data.path = "../Dict/numbers.dict";
	data.buffer = ft_read(&data);
	data.lines = ft_split(data.buffer, '\n', &data);
	bdd = parse_all(&data);
	printf("\033[1;32m%d\033[0m\n", data.nb_line + 1);
	free(data.buffer);
	for (int i = 0; i < data.nb_line; i++)
	{
		printf("ID = %s\t\tVALUE = %s\n", bdd[i].id, bdd[i].value);
		free(data.lines[i]);
		free(bdd[i].id);
		free(bdd[i].value);
	}
	free(data.lines);
	free(bdd);
} */
