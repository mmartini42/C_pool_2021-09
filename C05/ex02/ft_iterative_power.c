/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:52:24 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 13:52:26 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
** int	main(int ac, char **av)
** {
** 	if (ac != 3)
** 		return (-1);
** 	printf("%d\n", ft_iterative_power(atoi(av[1]), atoi(av[2])));
** }
*/