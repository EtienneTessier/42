/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_possibilities_row.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:37:59 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 22:46:55 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"
#include<stdlib.h>
#include<stdio.h>

int	*ft_count_result_row(int **tab, int *result, int index)
{
	int	i;
	int	j;

	result = malloc(4 * sizeof(int));
	if (result == NULL)
		return (result);
	i = 0;
	while (i <= 3)
	{
		result[i] = 0;
		i++;
	}
	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			result[j] += tab[index + i][j];
			j++;
		}
		i++;
	}
	return (result);
}

void	ft_write_poss_row(int **tab, int index, int to_check, int *output)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		printf("zob\n");
		if (tab[index + i][to_check] == (to_check + 1))
			control_and_write(tab, to_check + 1, output, index + i);
		i++;
	}
}

int	ft_check_possibilities_row(int **tab, int *output)
{
	int	*result;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		result = ft_count_result_row(tab, result, j);
		if (result == NULL)
			return (1);
		if (result[0] == 1)
			ft_write_poss_row(tab, j, 0, output);
		else if (result[1] == 2)
			ft_write_poss_row(tab, j, 1, output);
		else if (result[2] == 3)
			ft_write_poss_row(tab, j, 2, output);
		else if (result[3] == 4)
			ft_write_poss_row(tab, j, 3, output);
		else
		j += 4;
		i++;
	}
	return (0);
}

void	ft_check_possibilities(int **tab, int *output)
{
	ft_check_possibilities_row(tab, output);
	ft_check_possibilities_col(tab, output);
}
