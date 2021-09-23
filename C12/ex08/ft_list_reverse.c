/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:24:21 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 19:45:07 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*current;
	t_list	*forward;

	previous = NULL;
	current = *begin_list;
	while (current)
	{
		forward = current->next;
		current->next = previous;
		previous = current;
		current = forward;
	}
	*begin_list = previous;
}

/*
** #include "../ex00/ft_create_elem.c"
** #include "../ex05/ft_list_push_strs.c"
** #include <stdio.h>
** int	main(void)
** {
** 	char	*strs[] = {"ceci", "est", "un", "test", 0};
** 	t_list	*list;
** 	list = ft_list_push_strs(4, strs);
** 	ft_list_reverse_fun(list);
** 	while (list)
** 	{
** 		printf("%s ", (char *)list->data);
** 		list = list->next;
** 	}
** }
*/