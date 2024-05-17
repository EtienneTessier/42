/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:49:34 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 17:32:43 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"
#include<stdio.h>

void	ft_update_4_row_top(int **tab, int *out, int *param)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (param[i] == 4)
		{
			control_and_write(tab, 1, out, i);
			control_and_write(tab, 2, out, i + 4);
			control_and_write(tab, 3, out, i + 8);
			control_and_write(tab, 4, out, i + 12);
		}
		i++;
	}	
}

void	ft_update_4_row_bot(int **tab, int *out, int *param)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (param[4 + i] == 4)
		{
			control_and_write(tab, 1, out, i + 12);
			control_and_write(tab, 2, out, i + 8);
			control_and_write(tab, 3, out, i + 4);
			control_and_write(tab, 4, out, i);
		}
		i++;
	}
}

void	ft_update_4_col_left(int **tab, int *out, int *param)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 12)
	{
		if (param[8 + j] == 4)
		{
			control_and_write(tab, 1, out, i);
			control_and_write(tab, 2, out, i + 1);
			control_and_write(tab, 3, out, i + 2);
			control_and_write(tab, 4, out, i + 3);
		}
		i += 4;
		j++;
	}
}

void	ft_update_4_col_right(int **tab, int *out, int *param)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 12)
	{
		if (param[12 + j] == 4)
		{
			control_and_write(tab, 1, out, i + 3);
			control_and_write(tab, 2, out, i + 2);
			control_and_write(tab, 3, out, i + 1);
			control_and_write(tab, 4, out, i);
		}
		i += 4;
		j++;
	}
}

void	ft_update_4(int **tab, int *param, int *output)
{
	ft_update_4_row_top(tab, output, param);
	ft_update_4_row_bot(tab, output, param);
	ft_update_4_col_left(tab, output, param);
	ft_update_4_col_right(tab, output, param);
}
