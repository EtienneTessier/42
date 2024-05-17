/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushbsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:25:29 by etessier          #+#    #+#             */
/*   Updated: 2024/02/28 12:15:55 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHBSQ_H
# define RUSHBSQ_H

// structure

typedef struct	s_map
{
	int		size_max;
	int		nb_rows;
	int		nb_cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}				t_map;

// control_params_map
int		ft_control_params_map(char *param, t_map *data);

// control_map
char	*ft_control_map(char *map_path, t_map *data);

// read_map
char	*ft_read_map(char *map_path);

void    ft_print_tab(t_map data);

// init_map
int		ft_init_map(char *argv, t_map *data);

// ft_strjoin
char    *ft_strjoin(char *dest, char *src);

// tools
int		ft_strlen(char *str);

int		ft_is_printable_char(char c);

int		ft_atoimique(char *str, int size);

#endif
