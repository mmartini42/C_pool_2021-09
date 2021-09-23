/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spe_bzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:38:26 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 18:02:59 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

int	ft_size_malloc(t_data *data)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = data->arg;
	while (str[i])
	{
		if (str[i] != '0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_add_zero(char arg, int max)
{
	int		i;
	char	*tab;

	i = 1;
	tab = malloc(sizeof(char) * max + 1);
	if (!tab)
		return (NULL);
	tab[0] = arg;
	while (i < max)
	{
		tab[i] = '0';
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

void	ft_spe_bzero(t_data *data)
{
	int		size;
	int		i;
	int		index;
	char	**tab;

	size = ft_strlen(data->arg);
	tab = malloc(sizeof(char *) * ft_size_malloc(data) + 1);
	if (!tab)
		return ;
	i = 0;
	index = 0;
	while (data->arg[i])
	{
		if (data->arg[i] != '0')
		{
			tab[index] = ft_add_zero(data->arg[i], size - i);
			index++;
		}
		i++;
	}
	tab[index] = 0;
	data->numbers = tab;
}
