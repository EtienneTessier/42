/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:41:17 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 19:09:29 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<stdlib.h>
#include<stdio.h>

char	**ft_crea_map(char *argv, t_map *data)
{
	int		i;
	char	**map;

	i = 0;
	map = malloc(sizeof(char *) * (data->nb_rows + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (i < 10)
	{
		map[i] = malloc(sizeof(char) * (data->nb_cols + 1));
		if (!map[i])
			return (NULL);
		i++;
	}
	return (map);
}

void	ft_fill_map(t_map *data, char *argv)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (argv[i] != '\n')
		i++;
	i++;
	k = 0;
	while (k < data->nb_rows)
	{
		j = 0;
		while (j < data->nb_cols)
		{
			data->map[k][j] = argv[i + j];
			j++;
		}
		data->map[k][j] = '\0';
		i += j;
		i++;
		k++;
	}
}

int	ft_init_map(char *map_params, t_map *data)
{
	data->map = ft_crea_map(map_params, data);
	if (!data->map)
		return (0);
	ft_fill_map(data, map_params);
	// TEMP-----------------------------------------------------------
	ft_print_tab(*data);
	return (1);
}
