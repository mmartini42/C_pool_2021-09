/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:02:48 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:05:34 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft.h"
# include "map.h"

void	solve(t_map *map);
int		free_map(t_map *map, int height);
int		free_all_map(t_map *map);
void	print_map_structure(t_map *map);
void	print_map(t_map *map);
void	print_result(t_map *map);

/*
**	Complete t_map structure by BSQ map file
**	./MAP/PARSER/PARSER.C
*/

int		parse_map(t_file *file, t_map *map);

/*
**	Get the height of map in the first line of a BSQ map
**	./MAP/PARSER/DATAS/MAP_DATAS.C
*/

int		set_map_height(t_map *map, char *map_datas);

/*
**	Get the chars components in the first line of a BSQ map
**	./MAP/PARSER/DATAS/MAP_DATAS.C
*/

int		set_map_chars(t_map *map, char *map_datas);

/*
**	Get the value at x and y in the map
**	./MAP/GETTER.C
*/

int		get_value(t_map *map, int y, int x);

/*
**	Get the value at x and y - 1 in the map
**	./MAP/GETTER.C
*/

int		get_top_value(t_map *map, int y, int x);

/*
**	Get the value at x - 1 and y in the map
**	./MAP/GETTER.C
*/

int		get_left_value(t_map *map, int y, int x);

/*
**	Get the value at x - 1 and y - 1 in the map
**	./MAP/GETTER.C
*/

int		get_top_left_value(t_map *map, int y, int x);

#endif
