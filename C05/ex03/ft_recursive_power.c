/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:59:16 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 13:59:18 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int	main(int ac, char **av)
** {
** 	if (ac != 3)
** 		return (-1);
** 	printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
** }
*/