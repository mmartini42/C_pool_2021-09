/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:08:53 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/13 19:08:55 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_display_file.h"

void	ft_display_read(char *path)
{
	char	buf[2];
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (ft_put_errors(UN_READBLE));
	while (read(fd, buf, 1))
	{
		ft_putchar(buf[0]);
	}
	close(fd);
}
