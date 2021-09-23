/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:32:27 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 14:32:29 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i < 46340 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int	main(int ac, char **av)
** {
** 	if (ac != 2)
** 		return (-1);
** 	printf("%d\n", ft_sqrt(atoi(av[1])));
** }
*/