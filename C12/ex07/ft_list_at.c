/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:19:39 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:01 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i < nbr && begin_list)
	{
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	if (i < nbr && !begin_list)
		return (NULL);
	return (begin_list);
}

/*
** #include <stdio.h>
** #include "../ex00/ft_create_elem.c"
** #include "../ex05/ft_list_push_strs.c"
** int	main(void)
** {
** 	char	*strs[] = {"ceci", "Est", "Un", "test"};
** 	t_list	*list;
** 	t_list	*at;
** 	list = NULL;
** 	list = ft_list_push_strs(4, strs);
** 	at = ft_list_at(list, 0);
** 	printf("%s\n", (char *)at->data);
** }
*/