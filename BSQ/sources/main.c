/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:10:36 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:10:38 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	ft_err_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	execute(t_file *file, t_map *map, char *file_path, int fd)
{
	file->file_path = file_path;
	file->fd = fd;
	if (!parse_map(file, map))
	{
		ft_err_putstr("map error\n");
		return (0);
	}
	solve(map);
	print_result(map);
	free_all_map(map);
	return (1);
}

int	main(int argc, char **argv)
{
	t_file	file;
	t_map	map;
	int		i;

	if (argc == 1)
	{
		execute(&file, &map, 0, 0);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		execute(&file, &map, argv[i], -2);
		if (i < argc - 1)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
