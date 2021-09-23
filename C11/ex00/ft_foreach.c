/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:24:47 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/13 21:24:48 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
** #include <stdio.h>
** void	ft_putnbr(int nb)
** {
** 	printf("%d\n", nb);
** }
** int	main(void)
** {
** 	int	tab[] = {10, 5, 42, 111, 159};
** 	ft_foreach(tab, 5, &ft_putnbr);
** }
*/