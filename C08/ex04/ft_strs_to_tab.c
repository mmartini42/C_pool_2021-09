/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:37:44 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/09 21:37:47 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (dest)
	{
		i = 0;
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}

struct s_stock_str	ft_construct(char *str)
{
	t_stock_str	result;

	result.copy = ft_strdup(str);
	result.str = str;
	result.size = ft_strlen(str);
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab)
	{
		i = 0;
		while (i < ac)
		{
			tab[i] = ft_construct(av[i]);
			i++;
		}
		tab[i].str = 0;
		return (tab);
	}
	return (NULL);
}
