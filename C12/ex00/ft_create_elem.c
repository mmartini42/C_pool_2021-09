/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:21:26 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/15 21:42:54 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list) * 1);
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	t_list	*test;
** 	test = NULL;
** 	test = ft_create_elem("testt");
** 	printf("%s\n", (char*)test->data);
** 	free(test);
** }
*/