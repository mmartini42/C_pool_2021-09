/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:42:17 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/14 19:42:19 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_size_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	size;

	i = 0;
	size = ft_size_tab(tab);
	while (tab[i] && i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	char *strs[] = {"ceci", "est", "un", "test", 0};
** 	ft_sort_string_tab(strs);
** 	for (int i = 0; i < 4; i++)
** 		printf("\033[1;36m %s", strs[i]);
** 	printf("\n");
** 	char	*str2[] = {"aaaa", "bbb", "lll", "ccc", "aaaa", 0};
** 	ft_sort_string_tab(str2);
** 	for (int i = 0; i < 5; i++)
** 		printf("\033[1;32m %s", str2[i]);
** }
*/