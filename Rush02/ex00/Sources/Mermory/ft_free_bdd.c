/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bdd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:40:16 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 13:47:47 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

short	ft_error_bdd(t_data *data, t_number *bdd)
{
	int	i;

	i = -1;
	free(data->buffer);
	while (++i < data->nb_line)
		free(data->lines[i]);
	free(data->lines);
	i = -1;
	while (data->numbers[++i])
		free(data->numbers[i]);
	free(data->numbers[i]);
	i = -1;
	while (++i < data->nb_line)
	{
		free(bdd[i].id);
		free(bdd[i].value);
	}
	free(bdd);
	return (0);
}
