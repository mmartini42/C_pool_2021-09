/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:13:17 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/06 12:13:19 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) *(max - min));
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	char	*color[] = { "\033[1;0m",
** "\033[1;31m", "\033[1;32m", "\033[1;33m",
** "\033[1;34m", "\033[1;35m", "\033[1;36m",
** "\033[1;37m"
** };
** 	int	*tab;
** 	tab = ft_range(2147383647, 2147483647);
** 	int	j = 0;
** 	for (int i = 0; i < 10000; i++)
** 	{
** 		printf("%s%d \n", color[j], tab[i]);
** 		if (j % 5 == 0)
** 			j = 0;
** 		j++;
** 	}
** 	free(tab);
** }
*/