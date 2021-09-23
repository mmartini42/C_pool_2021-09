/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:20:59 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/04 10:21:01 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char a, char b, char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i > 0 && i < size - 1)
			ft_putchar(b);
		else if (i == size - 1)
			ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_display('A', 'B', 'C', x);
		else if (i > 0 && i < y - 1)
			ft_display('B', ' ', 'B', x);
		else if (i == y - 1)
			ft_display('A', 'B', 'C', x);
		i++;
	}
}
