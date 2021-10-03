/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:08:02 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:08:04 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	open_file(t_file *file)
{
	if (file->fd == 0)
		return (1);
	file->fd = open(file->file_path, O_RDONLY);
	if (file->fd == -1)
		return (0);
	return (1);
}
