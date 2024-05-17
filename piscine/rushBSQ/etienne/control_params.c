/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:39:33 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 17:57:48 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<stdio.h>

/*
		- entree :
	controle des param -> strlen de la premiere ligne, 
	param[0 -> param_len - 4]	= nb_lignes
	param[param_len - 3]		= char empty
	param[param_len - 2]		= char obstacle
	param[param_len - 1]		= char full

		- return code :
	-1 = nb_ligne < 1					--> ok
	-2 = char non printable				--> ok a tester
	-3 = repetition de char				--> ok
	-4 = caractere interdit dans la map	--> ok a tester
*/

int	ft_param_valid_map(char c, char empty, char obstacle)
{
	if (c == '\n' || c == empty || c == obstacle)
		return (1);
	printf("c = %c\n", c);
	return (0);
}

int	ft_control_params_int_map(char *param, char empty, char obstacle)
{
	int	i;

	i = 0;
	while (param[i] != '\0')
	{
		if (!ft_param_valid_map(param[i], empty, obstacle))
			return (0);
		i++;
	}
	return (1);
}

int	ft_control_char(char *param, int param_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < param_len)
	{
		if (!ft_is_printable_char(param[i]))
			return (-2);
		i++;
	}
	i = 1;
	while (i <= 3)
	{
		j = i + 1;
		while (j <= 3)
		{
			if (param[param_len - i] == param[param_len - j])
				return (-3);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_control_params_map(char *param, t_map *data)
{
	int	param_len;
	int	nb_rows_param;

	param_len = 0;
	while (param[param_len] != '\n')
		param_len++;
	if (!ft_control_char(param, param_len))
		return (ft_control_char(param, param_len));
	if (!ft_control_params_int_map(&param[param_len + 1], param[param_len - 3], param[param_len - 2]))
		return (-4);
	nb_rows_param = ft_atoimique(param, param_len - 3);
	if (nb_rows_param < 1)
		return (-1);
	data->empty = param[param_len - 3];
	data->obstacle = param[param_len - 2];
	data->full = param[param_len - 1];
	return (nb_rows_param);
}
