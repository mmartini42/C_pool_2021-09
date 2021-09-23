/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:32:28 by mathmart          #+#    #+#             */
/*   Updated: 2021/09/12 18:32:31 by mathmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH01_H
# define FT_RUSH01_H

# include <unistd.h>
# include <stdlib.h>

/*
** // Debugging malloc()
** //leaks -atExit -- ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
** static void *print_malloc(int line, const char *file, size_t sz)
** {
** 	void *p = malloc(sz);
** 	printf("malloc(%lu) = %p at %s:%d\n", sz, p, file, line);
** 	return p;
** }
** #define malloc(x) print_malloc(__LINE__, __FILE__, x)
*/

/*
** Verification function
*/

int		ft_height_col(char **tab, int x, int delta, int size);
int		ft_height_row(char **tab, int y, int delta, int size);
short	ft_check_double(char **tab, int x, int y, int size);
short	ft_first_args(int count, char *args);

/*
** Main function of backtracking
*/

int		ft_solve(char **tab, int size);

/*
** display function
*/

void	ft_display(char **tab, int size);
void	ft_put_error(char *str);
void	ft_print_array(char **array, int size);

/*
** Array[][] management function
*/

char	**ft_create_tab(char *args, int size);
char	**ft_free_all_tab(char **tab, int index);

/*
** Utils
*/

int		ft_strlen(char *str);

#endif
