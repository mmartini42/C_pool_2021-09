/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:25:29 by rblondia          #+#    #+#             */
/*   Updated: 2021/09/19 23:36:58 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

char	*ft_find_value(char *id, t_number *tab)
{
	int	i;

	i = 0;
	while (tab[i].id)
	{
		if (ft_strcmp(id, tab[i].id) == 0)
			return (tab[i].value);
		i++;
	}
	ft_put_error(NOT_FOUND);
	return (NULL);
}
