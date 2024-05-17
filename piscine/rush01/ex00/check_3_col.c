/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_3_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belgadid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:10:11 by belgadid          #+#    #+#             */
/*   Updated: 2024/02/18 23:39:20 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"

void	update_values_col(int **tab, int *output, int pos, int val)
{
	control_and_write(tab, val, output, pos);
}

void	ft_update_3_col_up_1(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i] == 3)
		{
			if (output[8 + i] == 3)
			{
				update_values_col(tab, output, i, 1);
				update_values_col(tab, output, 4 + i, 2);
			}
			else if (output[12 + i] == 3 && output[8 + i] == 4)
			{
				update_values_col(tab, output, i, 1);
				update_values_col(tab, output, 4 + i, 2);
			}
			else if (output[12 + i] == 4 && output[8 + i] == 3)
			{
				update_values_col(tab, output, i, 2);
				update_values_col(tab, output, 4 + i, 1);
			}
			else if (output[12 + i] == 4 && output[8 + i] == 1)
			{
				update_values_col(tab, output, i, 2);
				update_values_col(tab, output, 4 + i, 3);
			}
		}
		i++;
	}
}

void	ft_update_3_col_up_2(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i] == 3)
		{
			if (output[12 + i] == 4 && output[8 + i] == 2)
			{
				update_values_col(tab, output, i, 1);
				update_values_col(tab, output, 4 + i, 3);
			}
			else if (output[12 + i] == 4 && output[4 + i] == 1)
			{
				update_values_col(tab, output, i, 2);
				update_values_col(tab, output, 8 + i, 3);
			}
			else if (output[8 + i] == 4 && output[i] == 2)
			{
				update_values_col(tab, output, 12 + i, 1);
				update_values_col(tab, output, 4 + i, 3);
			}
		}
		i++;
	}
}

void	ft_update_3_col_down_1(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 4] == 3)
		{
			if (output[4 + i] == 3)
			{
				update_values_col(tab, output, 12 + i, 1);
				update_values_col(tab, output, 8 + i, 2);
			}
			else if (output[i] == 3 && output[4 + i] == 4)
			{
				update_values_col(tab, output, 12 + i, 1);
				update_values_col(tab, output, 8 + i, 2);
			}
			else if (output[i] == 4 && output[4 + i] == 3)
			{
				update_values_col(tab, output, 12 + i, 2);
				update_values_col(tab, output, 8 + i, 1);
			}
			else if (output[i] == 4 && output[4 + i] == 1)
			{
				update_values_col(tab, output, 12 + i, 2);
				update_values_col(tab, output, 8 + i, 3);
			}
		}
		i++;
	}
}

void	ft_update_3_col_down_2(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 4] == 3)
		{
			if (output[i] == 4 && output[4 + i] == 2)
			{
				update_values_col(tab, output, 12 + i, 1);
				update_values_col(tab, output, 8 + i, 3);
			}
			else if (output[i] == 4 && output[8 + i] == 1)
			{
				update_values_col(tab, output, 12 + i, 2);
				update_values_col(tab, output, 4 + i, 3);
			}
			else if (output[4 + i] == 4 && output[12 + i] == 2)
			{
				update_values_col(tab, output, i, 1);
				update_values_col(tab, output, 8 + i, 3);
			}
		}
		i++;
	}
}
