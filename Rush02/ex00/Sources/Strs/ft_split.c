/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:48:00 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/19 18:23:41 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

char	**ft_free_here(char **dst, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)dst[i]);
	}
	free(dst);
	return (NULL);
}

int	ft_count_split(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_malloc_dst(const char *s, char **dst, int count, char c)
{
	int	i;
	int	t_malloc;
	int	re_count;

	i = 0;
	re_count = 0;
	dst = (char **)malloc(sizeof(char *) * count + 1);
	if (!dst)
		return (0);
	while (re_count < count && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		t_malloc = 0;
		while (s[i] != c && s[i])
		{
			t_malloc++;
			i++;
		}
		dst[re_count] = (char *)malloc(sizeof(char) * t_malloc + 1);
		if (!dst[re_count])
			return (ft_free_here(dst, re_count));
		re_count++;
	}
	return (dst);
}

char	**ft_cpy_split(const char *s, char c, char **dst, int count)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (s[i] && index < count)
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			dst[index][j] = s[i];
			i++;
			j++;
		}
		dst[index][j] = '\0';
		index++;
	}
	dst[index] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c, t_data *data)
{
	char	**dst;
	int		count;

	if (!s)
		return (NULL);
	dst = NULL;
	count = ft_count_split(s, c);
	data->nb_line = count;
	dst = ft_malloc_dst(s, dst, count, c);
	dst[count] = 0;
	dst = ft_cpy_split(s, c, dst, count);
	return (dst);
}

/*
** int	main(void)
** {
** 	t_data data;
** 
** 	data.path = "ft_strlen.c";
** 	ft_read(&data);
** 	data.lines = ft_split(data.buffer);
** 	for (int i = 0; data.lines[i]; i++)
** 	{
** 		printf("|%s|\n", data.lines[i]);
** 		free(data.lines[i]);
** 	}
** 	free(data.lines);
** }
*/
