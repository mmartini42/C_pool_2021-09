/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:37:09 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 23:37:36 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display(char **john, t_number *bdd)
{
	int	i;

	i = -1;
	while (john[++i])
		ft_putstr(ft_find_value(john[i], bdd));
}

void	ft_display_last(t_data *data, t_number *bdd)
{
	char	**roch;
	char	**john;
	int		i;

	(void)bdd;
	roch = ft_format_entry(data->arg);
	i = 0;
	while (roch[i])
	{
		//printf("roch = %s\n", roch[i]);
		john = ft_tab(roch[i]);
		ft_display(john, bdd);
		i++;
	}
}