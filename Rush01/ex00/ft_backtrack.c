/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:55:44 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/12 18:55:46 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

int	ft_check(char **tab, int x, int y, int size)
{
	if (ft_check_double(tab, x, y, size)
		|| ft_height_col(tab, x, 1, size) > tab[x][size]
		|| (y == size - 1
		&& ft_height_col(tab, x, -1, size) != tab[x][size + 1])
		|| ft_height_row(tab, y, 1, size) > tab[y][size + 2]
		|| (x == size - 1
		&& ft_height_row(tab, y, -1, size) != tab[y][size + 3]))
		return (0);
	return (1);
}

int	ft_backtrack(char **tab, int size, int n)
{
	int	index;
	int	x;
	int	y;

	if (n == size * size)
		return (1);
	x = n % size;
	y = n / size;
	index = 0;
	while (++index <= size)
	{
		tab[y][x] = index;
		if (ft_check(tab, x, y, size))
		{
			if (ft_backtrack(tab, size, n + 1))
				return (1);
			tab[y][x] = 0;
		}
	}
	tab[y][x] = 0;
	return (0);
}

int	ft_solve(char **tab, int size)
{
	int	i;

	i = -1;
	while (++i)
	{
		if ((tab[i][size] + tab[i][size + 1] > size + 1)
			|| (tab[i][size + 2] + tab[i][size + 3] > size + 1))
			return (0);
	}
	return (ft_backtrack(tab, size, 0));
}
