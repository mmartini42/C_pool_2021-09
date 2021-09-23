/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:55:46 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 17:51:07 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
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
** 	t_list *new;
** 	list = NULL;
** 	char *strs[] = {"CEci", "EST", "un", "test", 0};
** 	list = ft_list_push_strs(4, strs);
** 	new = ft_list_find(list, "Un", strcmp);
** 	while (new)
** 	{
** 		printf("%s ", (char *)new->data);
** 		new = new->next;
** 	}
** }
*/
