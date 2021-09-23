/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:22:23 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 21:22:25 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
** #include <stdio.h>
**
** int main(void)
** {
** 	int tab[3];
**
** 	tab[0] = 1;
** 	tab[1] = 2;
** 	tab[2] = 3;
** 	ft_rev_int_tab(tab, 3);
** 	for (int i = 0; i < 3; i++)
** 		printf("%d ", tab[i]);
** }
*/
