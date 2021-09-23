/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:09:15 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/14 11:09:17 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_do_op.h"

char		*g_choice[5];
static void	(*g_f[5])(int, int) = {ft_add, ft_diff, ft_multi, ft_div, ft_mod};

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	inc;

	i = 0;
	result = 0;
	inc = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			inc *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * inc);
}

short	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_init_choice(void)
{
	g_choice[0] = "+\0";
	g_choice[1] = "-\0";
	g_choice[2] = "*\0";
	g_choice[3] = "/\0";
	g_choice[4] = "%\0";
}

int	main(int ac, char **av)
{
	int	i;
	int	index;

	if (ac != 4)
		return (-1);
	i = 0;
	index = 1;
	ft_init_choice();
	while (i < 5)
	{
		if (ft_strcmp(av[2], g_choice[i]) == 0)
		{
			g_f[i](ft_atoi(av[1]), ft_atoi(av[3]));
			index = 0;
		}
		i++;
	}
	if (index == 1)
		ft_putstr("0\n");
	return (0);
}
