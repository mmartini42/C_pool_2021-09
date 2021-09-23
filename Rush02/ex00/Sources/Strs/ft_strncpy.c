/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:44:53 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/18 23:38:07 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

void	ft_strncpy(char *dest, char *src, int size, int index)
{
	int	i;

	i = 0;
	while (src[index] && index < size)
	{
		dest[i] = src[index];
		index++;
		i++;
	}
	dest[i] = '\0';
}
