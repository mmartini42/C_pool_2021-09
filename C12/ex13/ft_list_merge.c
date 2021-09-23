/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:23:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 17:48:50 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	list = *begin_list1;
	if (!list)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (list && list->next)
		list = list->next;
	list->next = begin_list2;
}

/*
** #include <stdio.h>
** #include "../ex00/ft_create_elem.c"
** #include "../ex05/ft_list_push_strs.c"
** int main(void)
** {
** 	t_list	*list1;
** 	t_list	*list2;
** 	char	*strs[] =  {"ceci", "est", "un", "test", 0};
** 	char	*strs2[] = {"je", "ne", "sais", "plus", 0};
** 	list1 = NULL;
** 	list2 = NULL;
** 	list1 = ft_list_push_strs(4, strs);
** 	list2 = ft_list_push_strs(4, strs2);
** 	ft_list_merge(&list1, list2);
** 	while (list1)
** 	{
** 		printf("\033[1;36m%s ", (char *)list1->data);
** 		if (list1->next)
** 			printf("\033[1;32m-> ");
** 		list1 = list1->next;
** 	}
** }
*/
