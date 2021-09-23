/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:21:59 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 16:22:01 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}

/*
** #include <stdlib.h>
** #include <stdio.h>
** int	main(int ac, char **av)
** {
** 	if (ac != 2)
** 		return (-1);
** 	printf("%d\n", ft_find_next_prime(atoi(av[1])));
** 	// printf("%d\n", ft_is_prime(atoi(av[1])));
** }
*/
