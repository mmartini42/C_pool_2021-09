/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:52:42 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 22:25:46 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

static t_list	*ft_list_last2(t_list *begin_list)
{
	t_list	*last;

	last = begin_list;
	if (last)
	{
		while (last)
		{
			if (last->next == NULL)
				return (last);
			last = last->next;
		}
	}
	return (0);
}

void	ft_list_push_back2(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*node;

	if (*begin_list)
	{
		last = ft_list_last2(*begin_list);
		node = ft_create_elem(data);
		last->next = node;
	}
	else
		*begin_list = ft_create_elem(data);
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_back2(begin_list, data);
	ft_list_sort2(begin_list, cmp);
}

/*
** #include <stdio.h>
** #include <string.h>
** # include "../ex00/ft_create_elem.c"
** # include "../ex05/ft_list_push_strs.c"
** int	main(void)
** {
** 	char	*strs[] = {"aaaa", "bbbbb","ccccc", "ccccc", "vvvv", 0};
** 	t_list	*lst;
** 	lst = NULL;
** 	lst = ft_list_push_strs(5, strs);
** 	ft_sorted_list_insert(&lst, "zzzz", strcmp);
** 	while (lst)
** 	{
** 		printf("%s\n", (char *)lst->data);
** 		lst = lst->next;
** 	}
** }
*/
