/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:09:28 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/14 11:09:29 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

# define DIV_0 "Stop : division by zero\n"
# define MOD_0 "Stop : modulo by zero\n"

void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
void	ft_putnbr(int nb);

void	ft_add(int a, int b);
void	ft_diff(int a, int b);
void	ft_multi(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);

#endif
