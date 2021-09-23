/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:24:48 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 22:24:49 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/*
** #include <string.h>
**
** int main(void)
** {
** 	char	test[17];
** 	char	test2[17];
**
** 	(void)ft_strncpy(test, "ceci est un", 17);
** 	(void)strncpy(test2, "ceci est un", 17);
** 	printf("%s\n%s\n", test, test2);
** 	(void)ft_strncpy(test, "ceci est un test", 17);
** 	(void)strncpy(test2, "ceci est un test", 17);
** 	printf("%s,   %s\n", test, test2);
** }
*/
