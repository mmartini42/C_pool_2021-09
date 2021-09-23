/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:52:57 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/14 10:52:59 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_ascending_sorted(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_descending_sorted(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_ascending_sorted(tab, length, f))
		return (1);
	else if (ft_is_descending_sorted(tab, length, f))
		return (1);
	else
		return (0);
}

/*
** int	ft_sort_int(int a, int b)
** {
** 	return (a - b);
** }
** #include <stdio.h>
** int	main(void)
** {
** 	int	tab2[] = {10, 15, 20, 32, 42};
** 	printf("%d  1\n", ft_is_sort(tab2, 5, &ft_sort_int));
** }
*/
