/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:51:54 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 21:51:56 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		i++;
	}
}

/*
**  #include <stdio.h>
**
**  int main(void)
**  {
**  	int	tab[5];
** 
**  	tab[0] = -2451;
**  	tab[1] = -3045;
**  	tab[2] = 1;
**  	tab[3] = 245;
**  	tab[4] = 10;
**  	ft_sort_int_tab(tab, 5);
**  	for (int i = 0; i < 5; i++)
**  		printf("%d ", tab[i]);
**  }
*/
