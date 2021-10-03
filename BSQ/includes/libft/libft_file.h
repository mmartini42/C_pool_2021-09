/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:05:41 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

# include "libft.h"

typedef struct s_file
{
	int		fd;
	char	*file_path;
	char	*line;
}				t_file;

int	open_file(t_file *file);
int	next_line(t_file *file);
int	close_file(t_file *file);

#endif
