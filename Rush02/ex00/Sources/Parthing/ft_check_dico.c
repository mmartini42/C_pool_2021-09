/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dico.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:55:28 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 22:28:11 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

short	ft_closer(int *fd)
{
	close(*fd);
	return (0);
}

short	ft_parth_dict(char buffer[1], int length, int *fd)
{
	while (length > 0)
	{
		if (length == 1 && buffer[0] == '\n')
			continue ;
		if (length == 1 && !(buffer[0] >= '0' && buffer[0] <= '9'))
			return (ft_closer(fd));
		while (length == 1 && buffer[0] >= '0' && buffer[0] <= '9')
			length = read(*fd, buffer, 1);
		while (length == 1 && buffer[0] == ' ')
			length = read(*fd, buffer, 1);
		if (buffer[0] != ':')
			return (ft_closer(fd));
		length = read(*fd, buffer, 1);
		while (length == 1 && buffer[0] == ' ')
			length = read(*fd, buffer, 1);
		while (buffer[0] > 31 && buffer[0] != 127)
			length = read(*fd, buffer, 1);
		if (buffer[0] != '\n')
			return (ft_closer(fd));
		length = read(*fd, buffer, 1);
	}
	close(*fd);
	return (1);
}

short ft_error_dict(char *str)
{
	ft_put_error(str);
	return (0);
}

short	ft_verif_dico(char *path, t_data *data)
{
	int		fd;
	char	buf[1];
	int		len;

	fd = open(path, O_RDONLY);
	if (fd > 0)
	{
		len = read(fd, buf, 1);
		if (len <= 0)
			return (ft_error_dict(NOT_FOUND));
		data->path = path;
		if (!ft_parth_dict(buf, len, &fd))
			ft_put_error(DICT_ERROR);
		return (1);
	}
	ft_put_error(NOT_FOUND);
	return (0);
}

/*
** int main(int ac, char **av)
** {
** 	t_data data;
** 	t_number	*nb;
** 
** 	data.path = "./Dict/numbers.dict";
** 	printf("%d\n", ft_check_parthing(data, nb));
** 	char buf[1];
** 	int fd;
** 	int len = 0;
** 	fd = open(av[1], O_RDONLY);
** 	if (fd < 0)
** 		return (2);
** 	len = read(fd, buf, 1);
** 	printf("%d\n", ft_parth_dict(buf, len, &fd));
** }
*/