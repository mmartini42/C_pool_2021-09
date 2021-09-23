/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:00:52 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 15:40:40 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_display(int buf[9], int n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		buf[i] += 48;
		write(1, &buf[i], 1);
		buf[i] -= 48;
	}
	if (buf[0] < 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	buf[9];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		buf[i] = i;
	while (buf[0] <= 10 - n)
	{
		ft_display(buf, n);
		i = n - 1;
		buf[i]++;
		while (i)
		{
			if (buf[i] > 10 - n + i)
				buf[i - 1]++;
			i--;
		}
		while (++i < n)
		{
			if (buf[i] > 10 - n + i)
				buf[i] = buf[i - 1] + 1;
		}
	}
}
