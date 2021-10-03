/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:10:29 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:10:31 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	set_value(t_map *map, int y, int x, int value)
{
	map->map[y][x] = value;
}

int	get_min(int a, int b, int c)
{
	int	temp;

	temp = a;
	if (b < temp)
		temp = b;
	if (c < temp)
		temp = c;
	return (temp);
}

void	set_sol(t_map *map, int new_val, int y, int x)
{
	if (new_val > map->sol_size)
	{
		map->sol_size = new_val;
		map->sol_x = x;
		map->sol_y = y;
	}
}

void	solve(t_map *map)
{
	int	y;
	int	x;
	int	new_val;

	map->sol_size = 0;
	map->sol_x = -1;
	map->sol_y = -1;
	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (get_value(map, y, x) != 0)
			{
				new_val = get_min(get_top_value(map, y, x),
						get_left_value(map, y, x),
						get_top_left_value(map, y, x)) + 1;
				set_value(map, y, x, new_val);
				set_sol(map, new_val, y, x);
			}
			x++;
		}
		y++;
	}
}
