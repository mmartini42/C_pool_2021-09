/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:38:42 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/17 23:32:20 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
** #include <stdio.h>
**
** int main(void)
** {
** 	int a;
** 	int b;
** 
** 	a = 2;
** 	b = 10;
** 	ft_swap(&a, &b);
** 	printf("a = %d, b = %d\n", a ,b);
** }
*/
