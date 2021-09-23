/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:02:17 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/02 15:02:19 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

short	ft_is_alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (ft_is_alphanum(str[i]) && !ft_is_alphanum(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
** #include <stdio.h>
**
** int	main(void)
** {
** 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
** 	printf("%s\n", ft_strcapitalize(str));
** }
*/
