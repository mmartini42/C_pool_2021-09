/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:21:00 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/08 10:21:02 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

short	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

short	ft_is_word(char c, char before, char *charset)
{
	return (ft_is_charset(before, charset) && !ft_is_charset(c, charset));
}

int	ft_size_tab(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((i == 0 && !ft_is_charset(str[i], charset))
			|| (ft_is_charset(str[i - 1], charset)
				&& !ft_is_charset(str[i], charset)))
			count++;
		i++;
	}
	return (count);
}

int	*ft_size_words(char *str, char *charset, int size)
{
	int	*tab;
	int	i;
	int	index;

	tab = malloc(sizeof(int) * size);
	i = 0;
	index = -1;
	while (++index < size)
		tab[index] = 0;
	index = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
			tab[index]++;
		else if (i > 0 && ft_is_charset(str[i], charset))
			index++;
		i++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		index;
	int		i;
	int		j;
	int		*sizes;
	char	**dest;

	dest = malloc(sizeof(char *) * ft_size_tab(str, charset) + 1);
	index = 0;
	i = -1;
	j = 0;
	sizes = ft_size_words(str, charset, ft_size_tab(str, charset));
	while (str[++i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			if (i == 0 || ft_is_word(str[i], str[i - 1], charset))
				dest[index] = malloc(sizeof(char) * sizes[index] + 1);
			dest[index][j] = str[i];
			dest[index][++j] = '\0';
		}
		else if (i > 0 && !ft_is_charset(str[i - 1], charset) && ++index)
			j = 0;
	}
	dest[ft_size_tab(str, charset)] = 0;
	return (dest);
}

/*
** #include <stdio.h>
** int main(void)
** {
** 	char	*str;
** 	char	*charset;
** 	char	**dest;
** 	str = "Je suis un test de tres haute qua ; ";
** 	charset = "; ";
** 	dest = ft_split(str, charset);
** 	for (int i = 0; dest[i]; i++)
** 	{
** 		printf("\033[1;31m|\033[1;32m%s\033[1;31m|", dest[i]);
** 		free(dest[i]);
** 	}
** 	free(dest);
** }
*/