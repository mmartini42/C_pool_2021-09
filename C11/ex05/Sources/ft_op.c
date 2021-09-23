/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:09:40 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/14 12:43:25 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_do_op.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putstr("\n");
}

void	ft_diff(int a, int b)
{
	ft_putnbr(a - b);
	ft_putstr("\n");
}

void	ft_multi(int a, int b)
{
	ft_putnbr(a * b);
	ft_putstr("\n");
}

void	ft_div(int a, int b)
{
	if (b == 0)
		ft_putstr_error(DIV_0);
	else
	{
		ft_putnbr(a / b);
		ft_putstr("\n");
	}
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		ft_putstr_error(MOD_0);
	else
	{
		ft_putnbr(a % b);
		ft_putstr("\n");
	}
}
