/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:48:11 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/13 21:48:12 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*
** int	ft_is_alpha(char *str)
** {
** 	int	i;
** 	i = 0;
** 	while (str[i])
** 	{
** 		if (!(str[i] >= 'a' && str[i] < 'z'))
** 			return (0);
** 		i++;
** 	}
** 	return (1);
** }
** #include <stdio.h>
** int	main(void)
** {
** 	char	*str[] = {"ceci est", "1028", "un", "test"};
** 	printf("%d\n", ft_any(str, &ft_is_alpha));
** 	return (0);
** }
*/
