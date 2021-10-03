/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:10:21 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:10:22 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	free_map(t_map *map, int height)
{
	int	y;

	y = 0;
	while (y < height)
	{
		free(map->map[y]);
		y++;
	}
	free(map->map);
	return (1);
}

int	free_all_map(t_map *map)
{
	return (free_map(map, map->height));
}
