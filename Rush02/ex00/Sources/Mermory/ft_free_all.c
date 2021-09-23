/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:18:00 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 19:14:02 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

void	ft_free_all(t_data *data, t_number *bdd)
{
	int	i;

	i = -1;
	while (data->lines[++i])
		free(data->lines[i]);
	free(data->lines);
	free(data->buffer);
	i = -1;
	(void)bdd;
/* 	while (++i < data->nb_line)
	{
		free(bdd[i].id);
		free(bdd[i].value);
	}
	free(bdd); */
}