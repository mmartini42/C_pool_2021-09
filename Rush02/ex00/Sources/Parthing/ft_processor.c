/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:29:33 by rblondia          #+#    #+#             */
/*   Updated: 2021/09/19 23:37:46 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_rush02.h"

int	ft_validate_entry(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	ft_size_entry(char *entry)
{
	int	i;

	i = ft_strlen(entry) / 3;
	return (i);
}

// void			ft_strncpy(char *dest, char *src, int size, int i);

char	*ft_correct_entry_output(char *output)
{
	int		i;
	char	*copy;

	i = 0;
	while (output[i])
	{
		if (output[i] != '0')
			break ;
		i++;
	}
	if (i == 0)
		return (output);
	copy = malloc(ft_strlen(output));
	ft_strncpy(copy, output, ft_strlen(output) - i, i);
	return (copy);
}

int	ft_split_entry(char **dest, int index, char *entry, int size)
{
	char	*tmp;
	int		c_size;
	int		i;

	tmp = malloc(sizeof(char) * ft_strlen(entry));
	c_size = size % 3;
	if (c_size == 0)
		c_size = 3;
	i = 0;
	while (i < size)
	{
		if (i < c_size)
			tmp[i] = entry[(ft_strlen(entry) - size) + i];
		else
			tmp[i] = '0';
		i++;
	}
	tmp[i] = '\0';
	if (ft_validate_entry(tmp) == 1)
		return (c_size);
	dest[index] = ft_correct_entry_output(tmp);
	return (c_size);
}

char	**ft_format_entry(char *entry)
{
	int		index;
	int		size;
	char	**tab;

	size = ft_strlen(entry);
	tab = malloc(ft_size_entry(entry) * sizeof(char *) + 1);
	index = 0;
	while (size > 0)
	{
		size -= ft_split_entry(tab, index, entry, size);
		index++;
	}
	tab[ft_size_entry(entry)] = 0;
	return (tab);
}
