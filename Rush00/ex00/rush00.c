/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgolinva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 13:39:14 by mgolinva          #+#    #+#             */
/*   Updated: 2021/09/04 14:06:10 by mgolinva         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_displayx(int x)
{
	int	xp;

	xp = 0;
	if (xp == 0)
	{
		ft_putchar('o');
		xp++;
	}
	while (xp >= 1 && xp < x - 1)
	{
		ft_putchar('-');
		xp++;
	}
	if (xp == x - 1)
		ft_putchar('o');
}

void	ft_displayy(int y, int x)
{
	int	yp;
	int	yspace;

	yp = 1;
	yspace = 1;
	while (yp < y - 1)
	{
		ft_putchar('\n');
		ft_putchar('|');
		while (yspace < x - 1)
		{
			ft_putchar(' ');
			yspace++;
		}
		yspace = 1;
		if (x != 1)
			ft_putchar('|');
		yp++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_displayx(x);
	ft_displayy(y, x);
	ft_putchar('\n');
	if (x != 1 && y != 1)
		ft_displayx(x);
	if (y > 1 && x == 1 && x != 0 && y != 0)
		ft_putchar('o');
	if (y != 1)
		ft_putchar('\n');
}
