/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:07:45 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 20:07:48 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend_char(char *source, char c)
{
	char	*char_to_append;

	char_to_append = malloc(2 * sizeof(char));
	if (!char_to_append)
		return (0);
	char_to_append[0] = c;
	char_to_append[1] = 0;
	return (ft_strappend_str(source, char_to_append));
}
