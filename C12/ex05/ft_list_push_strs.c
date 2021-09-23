/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:53:03 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/22 17:32:42 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*first;
	int		i;

	i = 0;
	first = NULL;
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = first;
		first = list;
		i++;
	}
	return (first);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	t_list	*list;
** 	char	*strs[] = {"ceci", "est", "un", "test", 0};
** 	int		size;
** 	size = 4;
** 	list = NULL;
** 	list = ft_list_push_strs(size, strs);
** 	while (list)
** 	{
** 		printf("%s\n", (char *)list->data);
** 		list = list->next;
** 	}
** }
*/