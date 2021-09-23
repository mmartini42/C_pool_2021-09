/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:29:49 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/04 18:29:50 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

short	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (!base || ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;

	if (!ft_check_base(base))
		return ;
	nb = (long long)nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb / ft_strlen(base) > 0)
		ft_putnbr_base(nb / ft_strlen(base), base);
	write(1, &base[nb % ft_strlen(base)], 1);
}

/*
** #include <stdio.h>
**
** int	main(void)
** {
** 	ft_putnbr_base(10, "0123456789abcdef");
** 	printf("\n");
** 	ft_putnbr_base(2147483647, "0123456789abcdef");
** 	printf("\n");
** 	ft_putnbr_base(-2147483648, "0123456789abcdef");
** 	printf("\n");
** 	ft_putnbr_base(0, "0123456789abcdef");
** 	printf("\n");
** 	ft_putnbr_base(42, "0123456789abcdef");
** 	printf("\n");
** 	ft_putnbr_base(2147483647, "01");
** 	printf("\n");
** 	ft_putnbr_base(-2147483648, "01");
** }
*/
