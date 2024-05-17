/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belgadid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:10:11 by belgadid          #+#    #+#             */
/*   Updated: 2024/02/18 23:38:20 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"

void	ft_update_2_col_up(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i] == 2)
		{
			if (output[12 + i] == 4)
				control_and_write(tab, 3, output, i);
			else if (output[12 + i] == 3 && output[8 + i] == 4)
			{
				control_and_write(tab, 2, output, i);
				control_and_write(tab, 1, output, 4 + i);
			}
			else if (output[8 + i] == 4 && output[4 + i] == 2)
			{
				control_and_write(tab, 3, output, i);
				control_and_write(tab, 1, output, 12 + i);
			}
		}
		i++;
	}
}

void	ft_update_2_col_down(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 4] == 2)
		{
			if (output[i] == 4)
				control_and_write(tab, 3, output, 12 + i);
			else if (output[i] == 3 && output[4 + i] == 4)
			{
				control_and_write(tab, 2, output, 12 + i);
				control_and_write(tab, 1, output, 8 + i);
			}
			else if (output[4 + i] == 4 && output[8 + i] == 2)
			{
				control_and_write(tab, 3, output, 12 + i);
				control_and_write(tab, 1, output, i);
			}
		}
		i++;
	}
}

void	ft_update_2_row_left(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 8] == 2)
		{
			if (output[3 + 4 * i] == 4)
				control_and_write(tab, 3, output, 4 * i);
			else if (output[3 + 4 * i] == 3 && output[2 + 4 * i] == 4)
			{
				control_and_write(tab, 2, output, 4 * i);
				control_and_write(tab, 1, output, 1 + 4 * i);
			}
			else if (output[2 + 4 * i] == 4 && output[1 + 4 * i] == 2)
			{
				control_and_write(tab, 3, output, 4 * i);
				control_and_write(tab, 1, output, 3 + 4 *i);
			}
		}
		i++;
	}
}

void	ft_update_2_row_right(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 12] == 2)
		{
			if (output[4 * i] == 4)
				control_and_write(tab, 3, output, 3 + 4 *i);
			else if (output[4 * i] == 3 && output[1 + 4 * i] == 4)
			{
				control_and_write(tab, 2, output, 3 + 4 *i);
				control_and_write(tab, 1, output, 2 + 4 *i);
			}
			else if (output[1 + 4 * i] == 4 && output[2 + 4 * i] == 2)
			{
				control_and_write(tab, 3, output, 3 + 4 *i);
				control_and_write(tab, 1, output, 4 *i);
			}
		}
		i++;
	}
}
