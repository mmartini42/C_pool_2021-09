/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_datas.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:10:05 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:10:07 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int	set_map_height(t_map *map, char *map_datas)
{
	map->height = ft_natoi(map_datas, ft_strlen(map_datas) - 4);
	if (map->height <= 0)
		return (0);
	return (1);
}

int	set_map_chars(t_map *map, char *map_datas)
{
	int	first_line_len;

	first_line_len = ft_strlen(map_datas) - 1;
	map->void_char = map_datas[first_line_len - 3];
	if (!is_printable(map->void_char))
		return (0);
	map->barrier_char = map_datas[first_line_len - 2];
	if (!is_printable(map->barrier_char))
		return (0);
	if (map->barrier_char == map->void_char)
		return (0);
	map->filler_char = map_datas[first_line_len - 1];
	if (!is_printable(map->filler_char))
		return (0);
	if (map->filler_char == map->void_char)
		return (0);
	if (map->filler_char == map->barrier_char)
		return (0);
	return (1);
}
