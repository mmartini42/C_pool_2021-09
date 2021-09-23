/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:45:52 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/19 22:11:34 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_rush02.h"

int	ft_number_only(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}

void	ft_exec(int ac, char **av)
{
	t_data		data;
	t_number	*bdd;

	bdd = NULL;
	if ((ac == 2 && ft_verif_dico(PATH, &data) == 0)
		|| (ac == 3 && ft_verif_dico(av[1], &data) == 0))
		return ;
	if (ac == 2)
		data.arg = av[1];
	else
		data.arg = av[2];
	if (!ft_check_parthing_struct(&data, bdd))
	{ 
		ft_put_error(DICT_ERROR);
		return ;
	}
	ft_display_last(&data, bdd);
	//ft_free_all(&data, bdd);
	// Appeler le solveur 
}

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		ft_put_error(ARGS_ERROR);
	if (argc == 2)
	{
		if (!ft_number_only(argv[1]))
		{
			ft_put_error(ARGS_ERROR);
			return (-1);
		}
		else
			ft_exec(argc, argv);
	}
	if (argc == 3)
	{
		if (!ft_number_only(argv[2]))
		{
			ft_put_error(ARGS_ERROR);
			return (-1);
		}
		else
			ft_exec(argc, argv);
	}
	return (0);
}
