/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queen_puzzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:30:41 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/05 16:30:43 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_queen(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] += '0';
		write(1, &tab[i], 1);
		tab[i] -= '0';
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_ok(int *tab, int x, int y)
{
	int	i;

	if (y == 0)
		return (1);
	i = -1;
	while (++i < y)
	{
		if (tab[i] == x + y - i || tab[i] == x - y + i || tab[i] == x)
			return (0);
	}
	return (1);
}

void	ft_backtrack(int *result, int size, int *tab, int y)
{
	int	x;

	x = -1;
	while (++x < size)
	{
		if (ft_is_ok(tab, x, y))
		{
			tab[y] = x;
			if (y == size - 1)
			{
				*result += 1;
				ft_display_queen(tab, size);
			}
			else
				ft_backtrack(result, size, tab, y + 1);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	result;

	result = 0;
	ft_backtrack(&result, 10, tab, 0);
	return (result);
}

/*
** int main(void)
** {
** 	ft_ten_queens_puzzle();
** }
*/
