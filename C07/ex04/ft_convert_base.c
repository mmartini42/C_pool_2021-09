/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:40:48 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/21 19:28:36 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
short	ft_is_in_base(char c, char *base);
int		ft_pos_in_base(char c, char *base);
void	ft_add_in_dest(char *base, char *dest, int nbr, int index);

short	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1 || !base)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' '
			|| (base[i] == '+' || base[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	result;
	int	signes;

	i = 0;
	signes = 1;
	result = 0;
	while ((nbr[i] >= '\t' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signes *= -1;
		i++;
	}
	while (nbr[i] && ft_is_in_base(nbr[i], base))
	{
		result = result * ft_strlen(base) + ft_pos_in_base(nbr[i], base);
		i++;
	}
	return (result * signes);
}

int	ft_malloc_dest(long nbr, char *base)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		size++;
		nbr *= -1;
	}
	while (nbr >= ft_strlen(base))
	{
		size++;
		nbr /= ft_strlen(base);
	}
	return (size);
}

char	*ft_putnbr_base(long nbr, char *base, char *dest)
{
	int	count;

	count = ft_malloc_dest((long)nbr, base);
	dest = malloc(sizeof(char) * count + 1);
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr *= -1;
	}
	ft_add_in_dest(base, dest, nbr, count);
	dest[count + 1] = '\0';
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i_nbr;
	char	*dest;

	dest = NULL;
	if (!ft_check_base(base_to) || !ft_check_base(base_from))
		return (NULL);
	i_nbr = ft_atoi_base(nbr, base_from);
	dest = ft_putnbr_base(i_nbr, base_to, dest);
	return (dest);
}

/*
** #include <stdio.h>
** int	main(int ac, char **av)
** {
** 	char	*dest;
** 	if (ac < 4)
** 		printf("\033[1;31m MET PLUS DARGUMENT !!!!\n");
** 	else if (ac > 4)
** 		printf("\033[1;31mMET MOINS D'ARGUMENT !!!!\n");
** 	dest = ft_convert_base(av[1], av[2], av[3]);
** 	printf("%s\n", dest);
** 	free(dest);
** }
*/

/*
** #include <stdio.h>
** #define INT_MAX_DECI "2147483647"
** #define INT_MIN_DECI "-2147483648"
** #define INT_MAX_HEXA "7FFFFFFF"
** #define INT_MIN_HEXA "-80000000"
** #define INT_MAX_BIN "1111111111111111111111111111111"
** #define INT_MIN_BIN "-10000000000000000000000000000000"
** #define HEXA "0123456789ABCDEF"
** #define BIN "01"
** #define DECI "0123456789"
** int	main(void)
** {
** 	char	*dest;
** 	printf("\033[1;33m----------------------------------------\n\n");
** 	dest = ft_convert_base(INT_MAX_DECI, DECI, HEXA);
** 	printf("\033[1;32m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MAX_DECI, DECI, BIN);
** 	printf("%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_DECI, DECI, HEXA);
** 	printf("%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_DECI, DECI, BIN);
** 	printf("%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_DECI, DECI, DECI);
** 	printf("%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MAX_DECI, DECI, DECI);
** 	printf("%s\n", dest);
** 	free(dest);
** 	printf("\n\n\033[1;33m----------------------------------------\n\n");
** 	dest = ft_convert_base(INT_MAX_HEXA, HEXA, DECI);
** 	printf("\033[1;36m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MAX_HEXA, HEXA, BIN);
** 	printf("\033[1;36m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_HEXA, HEXA, DECI);
** 	printf("\033[1;36m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_HEXA, HEXA, BIN);
** 	printf("\033[1;36m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_HEXA, HEXA, HEXA);
** 	printf("\033[1;36m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MAX_HEXA, HEXA, HEXA);
** 	printf("\033[1;36m%s\n\n", dest);
** 	free(dest);
** 	printf("\n\n\033[1;33m----------------------------------------\n\n");
** 	dest = ft_convert_base(INT_MAX_BIN, BIN, HEXA);
** 	printf("\033[1;35m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MAX_BIN, BIN, DECI);
** 	printf("\033[1;35m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_BIN, BIN, HEXA);
** 	printf("\033[1;35m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_BIN, BIN, DECI);
** 	printf("\033[1;35m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MIN_BIN, BIN, BIN);
** 	printf("\033[1;35m%s\n", dest);
** 	free(dest);
** 	dest = ft_convert_base(INT_MAX_BIN, BIN, BIN);
** 	printf("\033[1;35m%s\n", dest);
** 	free(dest);
** 	printf("\n\n\033[1;33m----------------------------------------\n\n");
** }
*/