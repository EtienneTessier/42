/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:59:19 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 19:08:34 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	t_map	data;
	char	*map_params;

	map_params = ft_control_map("example_file", &data);
	if (!map_params)
		return (0);
	printf("map_params = \n%s", map_params);
	printf("data.nb_rows = %d\n", data.nb_rows);
	printf("data.nb_cols = %d\n", data.nb_cols);
	printf("data.empty = %c\n", data.empty);
	printf("data.obstacle = %c\n", data.obstacle);
	printf("data.full = %c\n", data.full);
	if (!ft_init_map(map_params, &data))
		return (0);
	return (1);
}
