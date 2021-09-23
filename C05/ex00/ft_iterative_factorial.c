/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:39:40 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 13:39:42 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int	main(int ac, char **av)
** {
** 	if (ac != 2)
** 		return (-1);
** 	printf("%d\n", ft_iterative_factorial(atoi(av[1])));
** }
*/
