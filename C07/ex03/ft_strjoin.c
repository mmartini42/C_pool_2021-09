/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:00:49 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/06 18:00:51 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_size(char **strs, int size, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	return (count);
}

char	*ft_spe_strcat(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	i_dest;
	int	i_sep;
	int	c_strs;

	i = -1;
	i_dest = 0;
	while (++i < size)
	{
		i_sep = -1;
		c_strs = -1;
		while (strs[i][++c_strs])
		{
			dest[i_dest] = strs[i][c_strs];
			i_dest++;
		}
		while (sep[++i_sep] && i < size - 1)
			dest[i_dest++] = sep[i_sep];
	}
	dest[i_dest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	char	*jsp;

	jsp = malloc(sizeof(char) * 1);
	*jsp = 0;
	if (size == 0)
		return (jsp);
	dest = malloc(sizeof(char) * ft_size(strs, size, sep) + 1);
	if (dest)
	{
		ft_spe_strcat(dest, strs, sep, size);
		return (dest);
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	char	*dest;
	char	*strs[] = {"ceci", "est", "un", "test", "lol",
	"je", "ne", "sais", "plus", "quoi", "mettre"};
	dest = ft_strjoin(11, strs, "----");
	printf("%s", dest);
	free(dest);
}
