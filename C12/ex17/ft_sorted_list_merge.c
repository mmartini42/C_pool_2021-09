/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:37:46 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 19:49:52 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_merge2(t_list **begin_list1, t_list *begin_list2)
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

void	ft_swap_list2(t_list **list1, t_list **list2)
{
	void	*tmp;

	tmp = (*list1)->data;
	(*list1)->data = (*list2)->data;
	(*list2)->data = tmp;
}

void	ft_list_sort2(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*prev;

	list = *begin_list;
	prev = NULL;
	while (list)
	{
		if (prev != NULL && (*cmp)(prev->data, list->data) > 0)
		{
			ft_swap_list2(&list, &prev);
			list = *begin_list;
			prev = NULL;
		}
		else
		{
			prev = list;
			list = list->next;
		}
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2
	, int (*cmp)())
{
	ft_list_merge2(begin_list1, begin_list2);
	ft_list_sort2(begin_list1, cmp);
}

/*
** #include <stdio.h>
** #include <string.h>
** #include "../ex00/ft_create_elem.c"
** #include "../ex05/ft_list_push_strs.c"
** #include "../ex02/ft_list_size.c"
** int main(void)
** {
** 	t_list	*list;
** 	char	*strs[] = {"aaaa", "vvvvv", "ccccc", "aaa", "test", 0};
** 	char	*strs2[] = {"ccc", "tttt", "ggggg","iiiii", 0};
** 	t_list	*list2;
** 
** 	list = NULL;
** 	list = ft_list_push_strs(5, strs);
** 	list2 = ft_list_push_strs(4, strs2);
** 	ft_list_sort(&list, strcmp);
** 	ft_list_sort(&list2, strcmp);
** 	ft_sorted_list_merge(&list, list2, strcmp);
** 	while (list)
** 	{
** 		printf("%s", (char *)list->data);
** 		if (list->next)
** 			printf(" <- ");
** 		list = list->next;
** 	}
** }
*/
