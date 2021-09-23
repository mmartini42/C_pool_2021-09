/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elamadon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:36:26 by elamadon          #+#    #+#             */
/*   Updated: 2021/09/04 14:37:03 by elamadon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char a, char b, char c, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i > 0 && i < x - 1)
			ft_putchar(b);
		else if (i == x - 1)
			ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			ft_display('A', 'B', 'A', x);
		else if (i > 0 && i < y - 1)
			ft_display('B', ' ', 'B', x);
		else if (i == y - 1)
			ft_display('C', 'B', 'C', x);
		i++;
	}
}
