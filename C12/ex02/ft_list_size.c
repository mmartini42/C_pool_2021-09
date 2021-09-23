/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:16:28 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/15 22:21:11 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

/*
** #include "../ex01/ft_list_push_front.c"
** #include <stdio.h>
** int	main(void)
** {
** 	t_list	*list;
** 	list = NULL;
** 	ft_list_push_front(&list, "ceci");
** 	ft_list_push_front(&list, "est");
** 	ft_list_push_front(&list, "un");
** 	ft_list_push_front(&list, "test");
** 	printf("%d\n", ft_list_size(list));
** }
*/