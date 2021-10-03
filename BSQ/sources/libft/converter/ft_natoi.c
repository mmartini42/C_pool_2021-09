/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_natoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:09:06 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:09:07 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_natoi(char *str, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;
	int				is_negative;

	i = 0;
	result = 0;
	is_negative = 1;
	while (str[i] && is_whitespace(str[i]) && i < n)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+') && i < n)
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9' && i < n)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)result * is_negative);
}
