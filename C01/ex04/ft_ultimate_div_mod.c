/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:13:35 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 21:13:37 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*
** #include <stdio.h>
**
** int	main(void)
** {
** 	int a,b;
**
** 	a = 10;
** 	b = 3;
** 	ft_ultimate_div_mod(&a, &b);
** 	printf("a == %d, b == %d\n", a, b);
** }
*/
