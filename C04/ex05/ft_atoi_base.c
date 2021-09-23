/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:55:00 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/04 19:55:03 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

short	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (!base || ft_strlen(base) <= 1)
		return (0);
	i = 0;
	j = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+' 
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

short	ft_is_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_pos(char	*base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signes;
	int	result;

	if (!ft_check_base(base))
		return (0);
	i = 0;
	signes = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			signes *= -1;
		i++;
	}
	while (str[i] && ft_is_in_base(base, str[i]))
	{
		result = result * ft_strlen(base) + ft_pos(base, str[i]);
		i++;
	}
	return (result * signes);
}

 #include <stdio.h>
  int	main(void)
  {
/* 	  	printf("%d\n", ft_atoi_base("1111111111111111111111111111111", "01"));
  	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01")); */
  //	printf("%d\n", ft_atoi_base("--80000000", "0123456789ABCDEF"));
  //	printf("%d\n", ft_atoi_base("--7FFFFFFF", "0123456789ABCDEF"));
  /*	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
  	printf("%d\n", ft_atoi_base("101010", "01"));
  	printf("%d\n", ft_atoi_base("0", "01"));
  	printf("%d\n", ft_atoi_base("0", "0123456789ABCDEF")); */
	
  }
