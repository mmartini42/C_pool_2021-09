/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:36 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:05:47 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECKER_H
# define LIBFT_CHECKER_H

# include "libft.h"

int		is_space(char c);
int		is_whitespace(char c);
int		is_numeric(char c);
int		is_uppercase(char c);
int		is_lowercase(char c);
int		is_alpha(char c);
int		is_alphanumeric(char c);
int		is_printable(char c);

#endif
