/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:08:48 by rblondia          #+#    #+#             */
/*   Updated: 2021/09/19 23:37:18 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define PATH "./Sources/Dict/numbers.dict"
# define ERROR_PARTH "Dict Error\n"
# define ARGS_ERROR "Error\n"
# define NOT_FOUND "Error\n"
# define DICT_ERROR "Dict Error\n"

typedef struct s_data
{
	int		fd;
	char	*path;
	char	*buffer;
	char	*arg;/* Nombre que l'utilisateur rentre */
	char	**numbers; /* nombre a rechercher */
	char	**lines;//lignes renvoye de split
	int		nb_line;
}				t_data;

typedef struct s_number
{
	char	*id;
	char	*value;
}				t_number;

char			*ft_read(t_data *data);

/*
** Utils
*/

unsigned int	ft_strlen(char *str);
void			ft_spe_bzero(t_data *data);
void			ft_put_error(char *str);
char			**ft_split(const char *str, char c, t_data *data);

char			*find_value(char *id, t_number **tab);

int				*ft_not_found(int *tab, t_data *data);

short			ft_check_parthing_struct(t_data *data, t_number *bdd);
short			ft_verif_dico(char *path, t_data *data);

void			ft_strncpy(char *dest, char *src, int size, int i);
int				ft_strcmp(char *s1, char *s2);

struct s_number	*parse_all(t_data *data);

char	*ft_find_value(char *id, t_number *tab);
char	**ft_format_entry(char *entry);
char	**ft_tab(char *str);

void	ft_display_last(t_data *data, t_number *bdd);

/*
** MEMORY
*/

void			ft_free_all(t_data *data, t_number *bdd);
short			ft_error_bdd(t_data *data, t_number *bdd);

#endif