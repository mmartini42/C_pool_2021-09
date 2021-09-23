/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:59:29 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/21 19:13:18 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_swap_list(t_list **list1, t_list **list2)
{
	void	*tmp;

	tmp = (*list1)->data;
	(*list1)->data = (*list2)->data;
	(*list2)->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*prev;

	list = *begin_list;
	prev = NULL;
	while (list)
	{
		if (prev != NULL && (*cmp)(prev->data, list->data) > 0)
		{
			ft_swap_list(&list, &prev);
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
** 	list = NULL;
** 	list = ft_list_push_strs(5, strs);
** 	printf("%d\n", ft_list_size(list));
** 	ft_list_sort(&list, strcmp);
** 	printf("%d\n", ft_list_size(list));
** 	while (list)
** 	{
** 		printf("%s", (char *)list->data);
** 		if (list->next)
** 			printf(" <- ");
** 		list = list->next;
** 	}
** }
*/