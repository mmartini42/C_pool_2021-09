/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:20:31 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/04 10:20:32 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	return (0);
}

/*
** int	ft_atoi(char *str)
** {
** 	int	i;
** 	int	signes;
** 	int	result;
**
** 	i = 0;
** 	signes = 1;
** 	result = 0;
** 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
** 		i++;
** 	if (str[i] == '-')
** 		signes = -1;
** 	if (str[i] == '-' || str[i] == '+')
** 		i++;
** 	while (str[i] && str[i] >= '0' && str[i] <= '9')
** 	{
** 		result = result * 10 + str[i] - '0';
** 		i++;
** 	}
** 	return (result * signes);
** }
**
** int	main(int ac, char **av)
** {
** 	if (ac != 3)
** 		return (-1);
** 	rush(ft_atoi(av[1]), ft_atoi(av[2]));
** 	return (0);
** }
*/