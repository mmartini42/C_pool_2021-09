/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:03:31 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/20 20:04:09 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map
{
	int		height;
	int		width;

	int		sol_x;
	int		sol_y;
	int		sol_size;

	char	void_char;
	char	barrier_char;
	char	filler_char;

	int		**map;
}				t_map;

#endif
