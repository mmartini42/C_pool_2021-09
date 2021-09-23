/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:31:23 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/21 14:27:40 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

static t_list	*ft_list_last(t_list *begin_list)
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*node;

	if (*begin_list)
	{
		last = ft_list_last(*begin_list);
		node = ft_create_elem(data);
		last->next = node;
	}
	else
		*begin_list = ft_create_elem(data);
}

/*
** #include <stdio.h>
** //gcc ft_list_push_back.c ../ex00/ft_create_elem.c
** int	main(void)
** {
** 	t_list	*list;
** 	list = NULL;
** 	ft_list_push_back(&list, "ceci");
** 	ft_list_push_back(&list,  "est");
** 	ft_list_push_back(&list, "un");
** 	ft_list_push_back(&list, "test");
** 	while (list)
** 	{
** 		printf("%s\n", (char *)list->data);
** 		list = list->next;
** 	}
** }
*/
