/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:59:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/21 12:52:40 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *)
	, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
		{
			(*f)(begin_list->data);
		}
		begin_list = begin_list->next;
	}
}

/*
** #include <stdio.h>
** #include <string.h>
** #include "../ex00/ft_create_elem.c"
** #include "../ex05/ft_list_push_strs.c"
** #include <unistd.h>
** void	ft_putstr(void *str)
** {
** 	printf("|%s| ", (char *)str);
** }
** int	main(void)
** {
** 	t_list *list;
** 	list = NULL;
** 	char *strs[] = {"CEci", "EST", "un", "test", 0};
** 	list = ft_list_push_strs(4, strs);
** 	ft_list_foreach_if(list, &ft_putstr, "Est", strcmp);
** 	while (list)
** 	{
** 		printf("%s ", (char *)list->data);
** 		list = list->next;
** 	}
** }
*/