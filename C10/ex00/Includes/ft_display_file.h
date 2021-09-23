/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:29:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/13 17:29:47 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define MISSING_ARGS "File name missing.\n"
# define MANY_ARGS "Too many arguments.\n"
# define UN_READBLE "Cannot read file.\n"

void	ft_put_errors(char *str);
void	ft_putchar(char c);
void	ft_display_read(char *path);

#endif