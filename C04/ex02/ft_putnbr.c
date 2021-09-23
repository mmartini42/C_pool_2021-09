/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:04:00 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/04 18:04:03 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	nbr;

	nbr = (long long)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

/*
** int	main(void)
** {
** 	ft_putnbr(0);
** 	ft_putchar('\n');
** 	ft_putnbr(-0);
** 	ft_putchar('\n');
** 	ft_putnbr(10);
** 	ft_putchar('\n');
** 	ft_putnbr(-10);
** 	ft_putchar('\n');
** 	ft_putnbr(2147483647);
** 	ft_putchar('\n');
** 	ft_putnbr(-2147483648);
** 	ft_putchar('\n');
** }
*/