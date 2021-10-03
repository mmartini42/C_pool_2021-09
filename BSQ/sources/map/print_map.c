/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:10:25 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:10:26 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_map_structure(t_map *map)
{
	ft_putstrln("Map structure:");
	ft_putstr(" - Height: ");
	ft_putnbr(map->height);
	ft_putchar('\n');
	ft_putstr(" - Void char: ");
	ft_putcharln(map->void_char);
	ft_putstr(" - Barrier char: ");
	ft_putcharln(map->barrier_char);
	ft_putstr(" - Filler char: ");
	ft_putcharln(map->filler_char);
	ft_putstrln(" - Sol: ");
	ft_putstr("		- Size: ");
	ft_putnbrln(map->sol_size);
	ft_putstr("		- X: ");
	ft_putnbrln(map->sol_x);
	ft_putstr("		- Y: ");
	ft_putnbrln(map->sol_y);
}

void	print_map(t_map *map)
{
	int	y;
	int	x;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			ft_putnbr(map->map[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int	is_result_pos(t_map *map, int y, int x)
{
	if (x > map->sol_x - map->sol_size && x <= map->sol_x)
	{
		if (y > map->sol_y - map->sol_size && y <= map->sol_y)
			return (1);
	}
	return (0);
}

void	print_result(t_map *map)
{
	int	value;
	int	y;
	int	x;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			value = get_value(map, y, x);
			if (value == 0)
				ft_putchar(map->barrier_char);
			else
			{
				if (is_result_pos(map, y, x))
					ft_putchar(map->filler_char);
				else
					ft_putchar(map->void_char);
			}
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
