/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:51:17 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/19 22:47:42 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

int	ft_count_tab_size(char *str, int div, int modulo)
{
	int	count;

	count = 2;
	if (modulo == 1 && div > 0)
		count++;
	if (modulo == 2)
	{
		if (div > 0)
			count++;
		if (str[0] != '1' && str[1] != '0')
			count = count + 2;
		else
			count++;
	}
	if (modulo == 0)
	{
		count++;
		if (div > 0)
			count++;
		if (str[1] != '1' && str[2] != '0')
			count = count + 2;
		else
			count++;
	}
	return (count);
}

void	ft_write_tab_m2(char **tab, char *str)
{
	unsigned int		index;
	unsigned int		i;

	index = 1;
	i = 1;
	tab[0] = malloc(sizeof(char) * 3);
	if (!(str[0] == '1' || str[1] == '0'))
	{
		tab[index] = malloc(sizeof(char) * 2);
		index++;
	}
	if (str[0] == '1')
	{
		tab[0][0] = str[0];
		tab[0][1] = str[1];
		tab[0][2] = '\0';
	}
	else if (str[1] != '0')
	{
		tab[0][0] = str[0];
		tab[0][1] = '0';
		tab[0][2] = '\0';
		tab[1][0] = str[1];
		tab[1][1] = '\0';
	}
	else
	{
		tab[0][0] = str[0];
		tab[0][1] = '0';
		tab[0][2] = '\0';
	}
	if ((ft_strlen(str) - 1) / 3 > 0)
	{
		tab[index] = malloc(sizeof(char) * (ft_strlen(str) + 1));
		tab[index][0] = '1';
		while (i < ft_strlen(str) - 1)
		{
			tab[index][i] = '0';
			i++;
		}
		tab[index][i] = '\0';
		index++;
	}
	tab[index] = 0;
}

void	ft_write_tab_m0(char **tab, char *str)
{
	unsigned int	index;
	unsigned int	i;

	index = 2;
	i = 1;
	tab[0] = malloc(sizeof(char) * 2);
	tab[1] = malloc(sizeof(char) * 4);
	if (str[1] == '0' && str[2] != '0')
		tab[2] = malloc(sizeof(char) * 2);
	else if (!(str[1] == '0' && str[2] == '0'))
	{
		if (str[1] == '1' || str[2] == '0') 
			tab[2] = malloc(sizeof(char) * 3);
		else 
		{
			tab[2] = malloc(sizeof(char) * 3);
			tab[3] = malloc(sizeof(char) * 2);
		}
	}
	tab[0][0] = str[0];
	tab[0][1] = '\0';
	tab[1][0] = '1';
	tab[1][1] = '0';
	tab[1][2] = '0';
	tab[1][3] = '\0';
	if (!(str[1] == '0' && str[2] == '0'))
	{
		if (str[1] != '0')
		{
			tab[index][0] = str[1];
			if (str[1] == 1)
			{
				tab[index][1] = str[2];
				tab[index][2] = '\0';
			}
			if (str[1] != '1' && str[2] == '0')
			{
				tab[index][1] = '0';
				tab[index][2] = '\0';
			}
			else
			{
				tab[index][1] = '0';
				tab[index][2] = '\0';
				index++;
				tab[index][0] = str[2];
				tab[index][1] = '\0';
			}
		}
		else
		{
			tab[index][0] = str[2];
			tab[index][1] = '\0';
		}
	}
	if ((ft_strlen(str) - 1) / 3 > 0)
	{
		index++;
		tab[index] = malloc(sizeof(char) * (ft_strlen(str) + 1));
		tab[index][0] = '1';
		while (i < ft_strlen(str) - 2)
		{
			tab[index][i] = '0';
			i++;
		}
		tab[index][i] = '\0';
	}
	index++;
	tab[index] = 0;
}

void	ft_write_tab_m1(char **tab, char *str)
{
	unsigned int		index;
	unsigned int		i;

	index = 0;
	i = 1;
	tab[index] = malloc(sizeof(char) * 2);
	tab[index][0] = str[0];
	tab[index][1] = '\0';
	if (((ft_strlen(str) - 1) / 3) > 0)
	{
		index++;
		tab[index] = malloc(sizeof(char) * (ft_strlen(str) + 1));
		tab[index][0] = '1';
		while (i < ft_strlen(str))
		{
			tab[index][i] = '0';
			i++;
		}
		tab[index][i] = '\0';
	}
	index++;
	tab[index] = 0;
}

char	**ft_tab(char *str)
{
	char	**tab;
	int		l;

	l = ft_strlen(str);
	tab = malloc(sizeof(char *) * ft_count_tab_size(str, l / 3, l % 3));
	if (l % 3 == 1)
		ft_write_tab_m1(tab, str);
	if (l % 3 == 2)
		ft_write_tab_m2(tab, str);
	if (l % 3 == 0)
		ft_write_tab_m0(tab, str);
	return (tab);
}
