/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:17:01 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/01 22:17:03 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
** #include <strings.h>
**
** int	main(void)
** {
** 	char *dest;
**
** 	dest = malloc(sizeof(char) * strlen("ceci est un test"));
** 	if (!dest)
** 		return (-1);
** 	dest = ft_strcpy(dest, "ceci est un test");
** 	printf("%s\n", dest);
** 	free(dest);
** }
*/

/*
** #include <stdio.h>
**
** int main(void)
** {
** 	char	test[17];
**
** 	(void)ft_strcpy(test, "ceci est un test");
** 	printf("%s\n", test);
** }
*/
