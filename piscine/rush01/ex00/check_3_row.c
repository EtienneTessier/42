/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_3_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belgadid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:10:11 by belgadid          #+#    #+#             */
/*   Updated: 2024/02/18 23:39:58 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"

void	update_values(int **tab, int *output, int pos, int val)
{
	control_and_write(tab, val, output, pos);
}

void	ft_update_3_row_left_1(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 8] == 3)
		{
			if (output[2 + 4 * i] == 3)
			{
				update_values(tab, output, i, 2);
				update_values(tab, output, 1 + 4 * i, 1);
			}
			else if (output[3 + 4 * i] == 3 && output[2 + 4 * i] == 4)
			{
				update_values(tab, output, 4 * i, 1);
				update_values(tab, output, 1 + 4 * i, 2);
			}
			else if (output[3 + 4 * i] == 4 && output[2 + 4 * i] == 3)
			{
				update_values(tab, output, 4 * i, 2);
				update_values(tab, output, 1 + 4 * i, 1);
			}
			else if (output[3 + 4 * i] == 4 && output[2 + 4 * i] == 1)
			{
				update_values(tab, output, 4 * i, 2);
				update_values(tab, output, 1 + 4 * i, 3);
			}
		}
		i++;
	}
}

void	ft_update_3_row_left_2(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 8] == 3)
		{
			if (output[3 + 4 * i] == 4 && output[2 + 4 * i] == 2)
			{
				update_values(tab, output, 4 * i, 1);
				update_values(tab, output, 1 + 4 * i, 3);
			}
			else if (output[3 + 4 * i] == 4 && output[1 + 4 * i] == 1)
			{
				update_values(tab, output, 4 * i, 2);
				update_values(tab, output, 2 + 4 * i, 3);
			}
			else if (output[2 + 4 * i] == 4 && output[4 * i] == 2)
			{
				update_values(tab, output, 3 + 4 * i, 1);
				update_values(tab, output, 1 + 4 * i, 3);
			}
		}
		i++;
	}
}

void	ft_update_3_row_right_1(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 12] == 3)
		{
			if (output[1 + 4 * i] == 3)
			{
				update_values(tab, output, 3 + 4 * i, 1);
				update_values(tab, output, 2 + 4 * i, 2);
			}
			else if (output[4 * i] == 3 && output[1 + 4 * i] == 4)
			{
				update_values(tab, output, 3 + 4 * i, 1);
				update_values(tab, output, 2 + 4 * i, 2);
			}
			else if (output[4 * i] == 4 && output[1 + 4 * i] == 3)
			{
				update_values(tab, output, 3 + 4 * i, 2);
				update_values(tab, output, 2 + 4 * i, 1);
			}
			else if (output[4 * i] == 4 && output[1 + 4 * i] == 1)
			{
				update_values(tab, output, 3 + 4 * i, 2);
				update_values(tab, output, 2 + 4 * i, 3);
			}
		}
		i++;
	}
}

void	ft_update_3_row_right_2(int **tab, int *output, int *params)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i + 12] == 3)
		{
			if (output[4 * i] == 4 && output[1 + 4 * i] == 2)
			{
				update_values(tab, output, 3 + 4 * i, 1);
				update_values(tab, output, 2 + 4 * i, 3);
			}
			else if (output[4 * i] == 4 && output[2 + 4 * i] == 1)
			{
				update_values(tab, output, 3 + 4 * i, 2);
				update_values(tab, output, 1 + 4 * i, 3);
			}
			else if (output[4 * i] == 4 && output[3 + 4 * i] == 2)
			{
				update_values(tab, output, 1 + 4 * i, 1);
				update_values(tab, output, 2 + 4 * i, 3);
			}
		}
		i++;
	}
}
