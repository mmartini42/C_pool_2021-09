/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:02:57 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 16:03:00 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int	main(int ac, char **av)
** {
** 	if (ac != 2)
** 		return (-1);
** 	printf("%d\n", ft_is_prime(atoi(av[1])));
** }
*/