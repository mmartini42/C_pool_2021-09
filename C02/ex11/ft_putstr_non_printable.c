/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:30:49 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/02 16:30:52 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

short	ft_is_printable(unsigned char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	ft_to_hexa(unsigned char c)
{
	char			*base;
	unsigned char	h;

	h = c;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[h / 16]);
	ft_putchar(base[h % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)str;
	while (src[i])
	{
		if (!ft_is_printable(src[i]))
		{
			ft_to_hexa(src[i]);
			i++;
		}
		else
		{
			ft_putchar(src[i]);
			i++;
		}
	}
}

/*
** int	main(void)
**  {
**  	ft_putstr_non_printable("Coucou \n tu\xfb\xff vas bien ?");
**  }
*/
