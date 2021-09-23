/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:24:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 17:16:38 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*last;

	last = begin_list;
	while (last)
	{
		if (last->next == NULL)
			return (last);
		last = last->next;
	}
	return (0);
}

/*
** t_list	*ft_create_elem(void *data)
** {
** 	t_list	*new;
** 	new = malloc(sizeof(t_list) * 1);
** 	if (!new)
** 		return (NULL);
** 	new->data = data;
** 	new->next = NULL;
** 	return (new);
** }
** void	ft_list_push_front(t_list **begin_list, void *data)
** {
** 	t_list	*node;
** 
** 	if (*begin_list)
** 	{
** 		node = ft_create_elem(data);
** 		node->next = *begin_list;
** 		*begin_list = node;
** 	}
** 	else
** 		*begin_list = ft_create_elem(data);
** }
** #include <stdio.h>
** int	main(void)
** {
** 	t_list	*list;
** 	t_list	*last;
** 	list = NULL;
** 	last = NULL;
** 	ft_list_push_front(&list, "ceci");
** 	ft_list_push_front(&list, "est");
** 	ft_list_push_front(&list, "un");
** 	ft_list_push_front(&list, "test");
** 	last = ft_list_last(list);
** 	printf("%s\n", (char *)last->data);
** }
*/