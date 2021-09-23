/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:37:56 by bterral           #+#    #+#             */
/*   Updated: 2021/09/12 11:44:18 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

short	ft_first_args(int count, char *args)
{
	int	l;
	int	i;
	int	n;

	n = 0;
	count *= 4;
	l = -1;
	while (args[++l])
		;
	i = -1;
	while (++i < l)
	{
		if ((i % 2) == 1 && args[i] != ' ')
			return (0);
		else if ((i % 2) == 0 && !(args[i] >= '1'
				&& args[i] <= (count / 4) + '0'))
			return (0);
		if (args[i] >= '1' && args[i] <= (count / 4) + '0')
			n++;
	}
	if (args[i - 1] >= '1' && args[i - 1] <= (count / 4) + '0')
		return (n == count);
	else
		return (0);
}
