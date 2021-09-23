/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:11:24 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/03 10:11:26 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
** #include <stdio.h>
** #include <string.h>
** #include <stdlib.h>
**
** int	main(void)
** {
** 	char	src[] = " TATD ";
** 	char	dest[16] = "ceci est un test";
** 	char	dest2[16] = "ceci est un test";
** 	ft_strcat(dest, src);
** 	printf("%s\n", dest);
**  	strcat(dest2, src);
** 	printf("%s\n", dest2);
** }
*/
