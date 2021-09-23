/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:09:02 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/03 13:09:04 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	if (i < size)
	{
		while (src[j] && i + 1 < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}

/*
** #include <string.h>
** #include <stdlib.h>
** #include <stdio.h>
**
** int	main(int ac, char **av)
** {
** 	(void)ac;
**  	char	src[] = "ceci est un test";
** 	char	dest[100] = "Ici est le TEST ";
** 	char	dest2[100] = "Ici est le TEST ";
**
** 	printf("%lu, %s\n", strlcat(dest, src, atoi(av[1])), dest);
** 	printf("%d, %s\n", ft_strlcat(dest2, src, atoi(av[1])), dest2);
** }
*/