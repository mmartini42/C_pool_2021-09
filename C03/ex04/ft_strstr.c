/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:41:19 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/03 12:41:21 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

short	ft_is_to_find(char *to_find, int index, char *str)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[index])
			return (0);
		i++;
		index++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	len_to_find;

	i = 0;
	len_to_find = ft_strlen(to_find);
	if (to_find == '\0' || len_to_find <= 0)
		return (str);
	while (str[i])
	{
		if (ft_is_to_find(to_find, i, str))
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
** #include <stdio.h>
**  #include <string.h>
**
**  int main(void)
**  {
**  	printf("%s\n",ft_strstr("ceci est un test", "est"));
**  	printf("%s\n",strstr("ceci est un test", "est"));
**  }
*/
