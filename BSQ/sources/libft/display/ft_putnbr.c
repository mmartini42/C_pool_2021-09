/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:08:33 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:08:35 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	val;

	val = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		val = nb * -1;
	}
	if ((val / 10) > 0)
		ft_putnbr(val / 10);
	ft_putchar(val % 10 + 48);
}
