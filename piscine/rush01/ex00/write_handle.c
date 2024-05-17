/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julombar <julombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:17:24 by julombar          #+#    #+#             */
/*   Updated: 2024/02/18 23:09:46 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"rush.h"
#include <unistd.h>

int	count_nbr_in_line(int nbr, int output[], int start, int end)
{
	int	i;
	int	counter;

	i = start;
	counter = 0;
	while (i < end)
	{
		if (output[i] == nbr)
		{
			counter++;
		}
		i++;
	}
	if (counter == 1)
	{
		return (1);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}

int	check_nbr_in_line(int nbr, int output[], int position)
{
	if (position >= 0 && position < 4)
	{
		return (count_nbr_in_line(nbr, output, 0, 4));
	}
	else if (position >= 4 && position < 8)
	{
		return (count_nbr_in_line(nbr, output, 4, 8));
	}
	else if (position >= 8 && position < 12)
	{
		return (count_nbr_in_line(nbr, output, 8, 12));
	}
	else if (position >= 12 && position < 16)
	{
		return (count_nbr_in_line(nbr, output, 12, 16));
	}
	return (0);
}

int	count_nbr_in_col(int nbr, int output[], int pos)
{
	int	i;
	int	j;
	int	counter;

	i = pos;
	j = 0;
	counter = 0;
	while (j < 4)
	{
		if (output[i] == nbr)
		{
			counter++;
		}
		i += 4;
		j++;
	}
	if (counter == 1)
	{
		return (1);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}

int	check_nbr_in_col(int nbr, int output[], int pos)
{
	if (pos == 0 || pos == 4 || pos == 8 || pos == 12)
	{
		return (count_nbr_in_col(nbr, output, 0));
	}
	else if (pos == 1 || pos == 5 || pos == 9 || pos == 13)
	{
		return (count_nbr_in_col(nbr, output, 1));
	}
	else if (pos == 2 || pos == 6 || pos == 10 || pos == 14)
	{
		return (count_nbr_in_col(nbr, output, 2));
	}
	else if (pos == 3 || pos == 7 || pos == 11 || pos == 15)
	{
		return (count_nbr_in_col(nbr, output, 3));
	}
	return (0);
}

int	control_and_write(int **tab, int nbr, int output[], int position)
{
	if (output[position] == 0)
	{
		output[position] = nbr;
		if (check_nbr_in_line(nbr, output, position) == 0
			|| check_nbr_in_col(nbr, output, position) == 0)
		{
			return (0);
		}
		ft_update_possibilities_row_col(tab, position, nbr);
		ft_remove_possibilities(tab, position);
		return (1);
	}
	else if (output[position] == nbr)
	{
		return (1);
	}
	write(1, "Error\n", 6);
	return (0);
}
