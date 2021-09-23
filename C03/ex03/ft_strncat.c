/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:28:25 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/03 10:28:27 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
** #include <stdio.h>
** #include <string.h>
** #include <stdlib.h>
**
** int	main(int ac, char **av)
** {
** 	(void)ac;
** 	char	src[] = "ceci est un test";
** 	char	dest[100] = " TADA ";
** 	char	dest2[100] = " TADA ";
**	strncat(dest, src, atoi(av[1]));
** 	printf("%s\n", dest);
** 	ft_strncat(dest2, src, atoi(av[1]));
** 	printf("%s\n", dest2);
** }
*/
