/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:49:53 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/15 22:41:51 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (*begin_list)
	{
		node = ft_create_elem(data);
		node->next = *begin_list;
		*begin_list = node;
	}
	else
		*begin_list = ft_create_elem(data);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	t_list	*list;
** 	list = NULL;
** 	ft_list_push_front(&list, "ceci");
** 	ft_list_push_front(&list, "est");
** 	ft_list_push_front(&list, "un");
** 	ft_list_push_front(&list, "test");
** 	int	i = 0;
** 	while (list)
** 	{
** 		printf("%s\n", (char *)list->data);
** 		list = list->next;
** 	}
** 	return (0);
** }
*/