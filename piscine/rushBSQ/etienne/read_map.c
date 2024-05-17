/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:47:40 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 13:57:23 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>

//	Mesure la taille de la map et de ses parametres
int	ft_map_size(char *map_path)
{
	char	buf[70];
	int		fd;
	int		nb_read;
	int		total_read;

	fd = open (map_path, O_RDONLY);
	if (fd == -1)
		return (0);
	nb_read = -1;
	total_read = 0;
	while (nb_read != 0)
	{
		nb_read = read(fd, buf, 70);
		if (nb_read == -1)
			return (0);
		total_read += nb_read;
	}
	close(fd);
	return (total_read);
}

//	Creer une chaine de caracteres temporaire pour recuperer les parametres et la grille
char	*ft_read_map(char *map_path)
{
	char	*map;
	int		fd;
	int		nb_read;
	int		total_size;

	fd = open (map_path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	nb_read = -1;
	total_size = ft_map_size(map_path);
	if (total_size == 0)
	{
		printf("Map Error\n");
		return (NULL);
	}
	map = malloc(sizeof(char) * (total_size + 1));
	if (!map)
		return (NULL);
	nb_read = read(fd, map, total_size);
	if (nb_read == -1)
		return (NULL);
	map[total_size] = '\0';
	close(fd);
	return (map);
}

void	ft_print_tab(t_map data)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < data.nb_rows)
	{
		j = 0;
		while (j < data.nb_cols)
		{
			printf("%c ",data.map[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
