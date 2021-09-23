/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:16:13 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 18:12:51 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

int	ft_size_read(char *path)
{
	int		count;
	int		fd;
	char	buf[2];

	count = 0;
	fd = open(path, O_RDONLY);
	if (!fd)
		return (0);
	while (read(fd, buf, 1))
		count++;
	close(fd);
	return (count);
}

char	*ft_read(t_data *data)
{
	char	*buff;

	buff = malloc(sizeof(char) * ft_size_read(data->path) + 1);
	if (!buff)
		return (NULL);
	data->fd = open(data->path, O_RDONLY);
	if (!data->fd)
		return (NULL);
	read(data->fd, buff, ft_size_read(data->path));
	close(data->fd);
	return (buff);
}
