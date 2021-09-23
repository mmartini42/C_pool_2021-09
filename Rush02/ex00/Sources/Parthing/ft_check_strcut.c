/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_strcut.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:48:21 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 18:48:29 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

short	ft_check_tab_struct(char *id, char *value)
{
	int		i;

	if (id == NULL || value == NULL)
		return (0);
	i = 0;
	while (id[i])
	{
		if (!(id[i] >= '0' && id[i] <= '9'))
			return (0);
		i++;
	}
	i = 0;
	while (value[i])
	{
		if (!(value[i] >= 32 && value[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

short	ft_check_parthing_struct(t_data *data, t_number *bdd)
{
	int	index;
	(void)bdd;
	data->buffer = ft_read(data);
	data->lines = ft_split(data->buffer, '\n', data);
	bdd = parse_all(data);
	index = 0;
	while (index < data->nb_line)
	{
		if (!ft_check_tab_struct(bdd[index].id, bdd[index].value))
			return (ft_error_bdd(data, bdd));
		index++;
	}
	return (1);
}
