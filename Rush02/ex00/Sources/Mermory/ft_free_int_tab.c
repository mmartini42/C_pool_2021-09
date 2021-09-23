/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:22:32 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 13:47:49 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

int	*ft_not_found(int *tab, t_data *data)
{
	int	i;

	i = -1;
	free(tab);
	while (data->lines[++i])
		free(data->lines[i]);
	free(data->lines);
	i = -1;
	while (data->numbers[++i])
		free(data->numbers[i]);
	free(data->numbers);
	ft_put_error(NOT_FOUND);
	return (NULL);
}
