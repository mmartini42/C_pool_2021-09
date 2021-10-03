/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:08:08 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:08:10 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	close_file(t_file *file)
{
	if (file->line != 0)
	{
		free(file->line);
		file->line = 0;
	}
	if (file->fd <= 0)
		return (0);
	close(file->fd);
	return (1);
}
