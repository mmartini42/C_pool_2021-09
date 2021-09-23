/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:32:08 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/20 22:06:32 by mathmart         ###   ########.fr       */
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
	return (!ft_is_charset(c, charset) && ft_is_charset(before, charset));
}

int	ft_nb_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((i == 0 && !ft_is_charset(str[i], charset))
			|| ft_is_word(str[i], str[i - 1], charset))
			count++;
		i++;
	}
	return (count);
}

int	*ft_size_words(char *str, char *charset)
{
	int	*tab;
	int	index;
	int	i;

	tab = malloc(sizeof(int) * ft_nb_words(str, charset) + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < ft_nb_words(str, charset))
		tab[i] = 0;
	i = 0;
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
	int		*size_words;
	int		i;
	int		index;
	int		j;
	char	**dest;

	dest = malloc(sizeof(char *) * ft_nb_words(str, charset) + 1);
	size_words = ft_size_words(str, charset);
	i = -1;
	index = 0;
	j = 0;
	while (str[++i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			if (i == 0 || ft_is_word(str[i], str[i - 1], charset))
				dest[index] = malloc(sizeof(char) * size_words[index] + 1);
			dest[index][j] = str[i];
			dest[index][++j] = '\0';
		}
		else if (i > 0 && !ft_is_charset(str[i - 1], charset) && ++index)
			j = 0;
	}
	dest[ft_nb_words(str, charset)] = 0;
	return (dest);
}
/*
** #include <stdio.h>
** int	main(void)
** {
** 	int		nb_words;
** 	char	*str;
** 	char	*charset;
** 	str = "ceci est un test ; ";
** 	charset = " ";
** 	printf("\n\033[1;31m//\033[1;33m-------------
** 	---------------------------\033[1;31m\\\\\n\n");
** 	nb_words = ft_nb_words(str, charset);
** 	printf("\033[1;35m%d\n", nb_words);
** 	printf("\n\033[1;31m//\033[1;33m-------------
** 	---------------------------\033[1;31m\\\\\n\n");
** 	int	*tab;
** 	tab = ft_size_words(str, charset);
** 	for (int i = 0; i < nb_words; i++)
** 	{
** 		printf("\033[1;32m%d", tab[i]);
** 		if (!(i + 1 >= nb_words))
** 			printf(" \033[1;36m-> ");
** 	}
** 	printf("\n\n\033[1;31m//\033[1;33m-----------
** 	-----------------------------\033[1;31m\\\\\n\n");
** 	free(tab);
** 	char	**dest;
** 	dest = ft_split(str, charset);
** 	for (int i = 0; dest[i]; i++)
** 	{
** 		printf("\033[1;35m|\033[1;36m%s\033[1;35m|\n", dest[i]);
** 		free(dest[i]);
** 	}
** 	free(dest);
** 	printf("\n\033[1;31m//\033[1;33m-------------
** 	---------------------------\033[1;31m\\\\\n");
** }
*/
