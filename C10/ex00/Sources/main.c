/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:54:09 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/13 18:54:11 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_display_file.h"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_put_errors(MISSING_ARGS);
		return (-1);
	}
	else if (ac > 2)
	{
		ft_put_errors(MANY_ARGS);
		return (-1);
	}
	ft_display_read(av[1]);
	return (0);
}
