/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:23 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:06:02 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# include "libft/libft_str.h"
# include "libft/libft_display.h"
# include "libft/libft_checker.h"
# include "libft/libft_file.h"

int	ft_atoi(char *str);
int	ft_natoi(char *str, unsigned int n);

#endif
