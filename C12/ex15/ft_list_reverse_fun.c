/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:15:29 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 11:58:55 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		count;
	int		i;
	int		j;
	t_list	*current;
	void	*data;

	current = begin_list;
	count = ft_list_size(begin_list);
	i = 0;
	while (i < count - 1)
	{
		j = i;
		current = begin_list;
		while (current && current->next && j < count - 1)
		{
			data = current->data;
			current->data = current->next->data;
			current->next->data = data;
			current = current->next;
			j++;
		}
		i++;
	}
}

/*
** #include "../ex00/ft_create_elem.c"
** #include "../ex05/ft_list_push_strs.c"
** #include <stdio.h>
** int	main(void)
** {
** 	char	*strs[] = {"ceci", "est", "un", "test", 0};
** 	t_list	*list;
** 	list = ft_list_push_strs(4, strs);
** 	ft_list_reverse_fun(list);
** 	while (list)
** 	{
** 		printf("%s ", (char *)list->data);
** 		list = list->next;
** 	}
** }
*/
