/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:05:46 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 18:12:07 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<stdlib.h>
#include<stdio.h>

int	ft_count_rows(char *map)
{
	int	i;
	int	nb_rows;

	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	nb_rows = 0;
	while (map[i] != '\0')
		{
			if (map[i] == '\n')
				nb_rows++;
			i++;
		}
	return (nb_rows);
}

// verifie la longueur de chaque ligne, si une differente retourne 0, sinon 1
int	ft_control_rows(char *map)
{
	int	i;
	int	size_row;
	int	size_control;

	i = 0;
	while (map[i] != '\n')
		i++;
	size_control = 0;
	while (map[++i] != '\n')
		size_control++;
	while (map[++i] != '\0')
	{
		size_row = 0;
		while (map[i] != '\n')
		{
			size_row++;
			i++;
		}
		if (size_row != size_control)
			return (0);
	}
	return (size_row);
}

char	*ft_control_map(char *map_path, t_map *data)
{
	int		nb_rows_map;
	char	*map_params;

	map_params = ft_read_map(map_path);
	if (!map_params)
		return (NULL);
	nb_rows_map = ft_control_params_map(map_params, data);
	if (nb_rows_map < 1)
		return (NULL);
	data->nb_rows = ft_count_rows(map_params);
	if (data->nb_rows < 0 || (data->nb_rows != nb_rows_map))
		return (NULL);
	data->nb_cols = ft_control_rows(map_params);
	if (data->nb_cols < 1)
		return (NULL);
	return (map_params);
}
