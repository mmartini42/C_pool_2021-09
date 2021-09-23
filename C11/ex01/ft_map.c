/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:29:58 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/13 21:29:59 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*dest;
	int	i;

	dest = malloc(sizeof(int) * length);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}

/*
** #include <stdio.h>
** int	ft_add_two(int nb)
** {
** 	return (nb + 2);
** }
** int	main(void)
** {
** 	int tab[] = {10, 5, 42, 111, 159};
** 	int	*new_tab;
** 	new_tab = ft_map(tab, 5, &ft_add_two);
** 	for (int i = 0; i < 5; i++)
** 	{
** 		printf("\033[1;32m%d  value == \033[1;33m%d", new_tab[i], tab[i] + 2);
** 		if (i % 1 == 0 && i < 4)
** 			printf("\033[1;36m -> ");
** 	}
** 	free(new_tab);
** 	return (0);
** }
*/