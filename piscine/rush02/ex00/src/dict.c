/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:23:22 by etessier          #+#    #+#             */
/*   Updated: 2024/02/26 13:36:42 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>

int	ft_dict_size(char *dict_path)
{
	char	buf[70];
	int		fd;
	int		nb_read;
	int		total_read;

	fd = open (dict_path, O_RDONLY);
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

char	*ft_read_dict(char *dict_path)
{
	char	*dict;
	int		fd;
	int		nb_read;
	int		total_size;

	fd = open (dict_path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	nb_read = -1;
	total_size = ft_dict_size(dict_path);
	if (total_size == 0)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	dict = malloc(sizeof(char) * (total_size + 1));
	if (!dict)
		return (NULL);
	nb_read = read(fd, dict, total_size);
	if (nb_read == -1)
		return (NULL);
	dict[total_size] = '\0';
	close(fd);
	return (dict);
}
