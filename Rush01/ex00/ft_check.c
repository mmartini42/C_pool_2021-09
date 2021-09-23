/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 23:31:34 by mbrouty           #+#    #+#             */
/*   Updated: 2021/09/11 23:31:34 by mbrouty          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_delta_calculator(int *axis, int *max, int delta, int size)
{
	if (delta > 0)
	{
		*axis = 0;
		*max = size;
	}
	else
	{
		*axis = size - 1;
		*max = -1;
	}
}

int	ft_height_col(char **tab, int x, int delta, int size)
{
	int	y;
	int	max;
	int	vmax;
	int	height;

	ft_delta_calculator(&y, &max, delta, size);
	vmax = 0;
	height = 0;
	while (y != max)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > vmax)
		{
			vmax = tab[y][x];
			height++;
		}
		y += delta;
	}
	return (height);
}

int	ft_height_row(char **tab, int y, int delta, int size)
{
	int	x;
	int	max;
	int	vmax;
	int	height;

	ft_delta_calculator(&x, &max, delta, size);
	vmax = 0;
	height = 0;
	while (x != max)
	{
		if (tab[y][x] > vmax)
		{
			vmax = tab[y][x];
			height++;
		}
		x += delta;
	}
	return (height);
}

short	ft_check_double(char **tab, int x, int y, int size)
{
	int	i;

	if (!tab[y][x])
		return (0);
	i = y;
	while (i--)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = y;
	while (++i < size)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = x;
	while (i--)
		if (tab[y][x] == tab[y][i])
			return (1);
	i = x;
	while (++i < size)
		if (tab[y][x] == tab[y][i])
			return (1);
	return (0);
}
