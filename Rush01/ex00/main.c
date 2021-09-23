/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:34:28 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/12 11:48:18 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"
#include <unistd.h>

int	ft_size(char *str);

void	ft_put_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

char	**ft_free_all_tab(char **tab, int index)
{
	while (index)
	{
		free(tab[index]);
		index--;
	}
	free(tab);
	return (NULL);
}

int	main(int ac, char **av)
{
	int		size;
	char	**tab;

	if (ac < 2 || !ft_first_args(((ft_strlen(av[1]) / 2) / 4 + 1), av[1]))
	{
		ft_put_error("Error\n");
		return (-1);
	}
	size = ((ft_strlen(av[1]) / 2) / 4) + 1;
	tab = ft_create_tab(av[1], size);
	if (tab)
	{
		if (ft_solve(tab, size))
			ft_display(tab, size);
		else
			ft_put_error("Error\n");
		while (size--)
			free(tab[size]);
		free(tab);
	}
	return (0);
}
