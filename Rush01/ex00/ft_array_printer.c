/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:36:08 by mbrouty           #+#    #+#             */
/*   Updated: 2021/09/11 11:05:25 by mbrouty          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char **tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (j % 1 == 0 && j < size && j > 0)
				write(1, " ", 1);
			ft_putchar(tab[i][j] + 48);
		}
		write(1, "\n", 1);
	}
}
