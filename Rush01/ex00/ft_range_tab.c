/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:05:05 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/12 11:39:27 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_create_tab(char *args, int size)
{
	char	**tab;
	int		x;
	int		y;

	tab = malloc(sizeof(char *) * size + 5);
	if (!tab)
		return (ft_free_all_tab(tab, 0));
	y = -1;
	while (++y < size)
	{
		tab[y] = malloc(sizeof(char) * (size + 4));
		if (!tab[y])
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
			tab[y][size + x] = args[2 * (y + x * size)] - '0';
	}
	return (tab);
}
