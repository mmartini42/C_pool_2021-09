/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:07:40 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:07:41 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strappend_str(char *source, char *to_append)
{
	char	*append;
	int		append_size;

	append_size = ft_strlen(source) + ft_strlen(to_append) + 1;
	append = malloc(append_size * sizeof(char));
	if (!append)
		return (0);
	ft_strcpy(append, source);
	ft_strcpy(&append[ft_strlen(source)], to_append);
	free(source);
	free(to_append);
	return (append);
}
