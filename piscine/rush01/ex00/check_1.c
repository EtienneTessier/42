/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:43:52 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 20:52:37 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"
#include<stdio.h>

void	ft_update_1_rows(int **tab, int *out, int *param)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (param[i] == 1)
			control_and_write(tab, 4, out, i);
		i++;
	}
	i = 0;
	while (i <= 3)
	{
		if (param[4 + i] == 1)
			control_and_write(tab, 4, out, 12 + i);
		i++;
	}
}

void	ft_update_1_cols(int **tab, int *out, int *param)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 12)
	{
		if (param[8 + j] == 1)
			control_and_write(tab, 4, out, i);
		i += 4;
		j++;
	}
	i = 0;
	j = 0;
	while (i <= 12)
	{
		if (param[12 + j] == 1)
			control_and_write(tab, 4, out, 3 + i);
		i += 4;
		j++;
	}
}

void	ft_update_1(int **tab, int *param, int *output)
{
	ft_update_1_rows(tab, output, param);
	ft_update_1_cols(tab, output, param);
}
