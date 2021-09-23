/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:48:18 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/17 13:54:53 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				*tab;
	int				i;
	unsigned int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (tab == 0 || size == 0)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

/*
** #include <stdio.h>
**
** int	main(void)
** {
** 	int	*tab;
** 	int	size;
**
** 	size = ft_ultimate_range(&tab, 20, 520);
** 	for (int i = 0; tab[i]; i++)
** 	{
** 		printf("%d ", tab[i]);
** 	}
** 	free(tab);
** }
*/