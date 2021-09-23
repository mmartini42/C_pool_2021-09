/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:03:55 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 14:04:00 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int	main(int ac, char **av)
** {
** 	if (ac != 2)
** 		return (-1);
** 	printf("%d\n", ft_fibonacci(atoi(av[1])));
** }
*/