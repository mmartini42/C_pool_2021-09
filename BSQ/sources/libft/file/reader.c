/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:07:56 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:07:58 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	next_line(t_file *file)
{
	char	buffer;
	int		i;

	if (file->fd == -1)
		return (0);
	i = 0;
	if (file->line != 0)
		free(file->line);
	file->line = malloc(1 * sizeof(char));
	file->line[0] = 0;
	while (read(file->fd, &buffer, 1))
	{
		file->line = ft_strappend_char(file->line, buffer);
		i++;
		if (buffer == '\n')
		{
			file->line[i + 1] = 0;
			break ;
		}
	}
	if (!ft_strlen(file->line))
		return (0);
	return (1);
}
