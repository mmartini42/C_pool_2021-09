/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:59:21 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 20:59:23 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
** #include <stdio.h>
**
** int	main(void)
** {
** 	int	div;
** 	int	mod;
**
** 	ft_div_mod(10, 3, &div, &mod);
** 	printf("div = %d, mod = %d\n", div, mod);
** }
*/