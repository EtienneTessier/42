/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_possibilities.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:45:50 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 23:10:59 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_update_possibilities_row(int **tab, int index, int to_update)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		tab[index + i][to_update - 1] = 0;
		i++;
	}
}

void	ft_update_possibilities_col(int **tab, int index, int to_update)
{
	int	i;

	i = 0;
	while (i <= 12)
	{
		tab[index + i][to_update - 1] = 0;
		i += 4;
	}
}

void	ft_update_possibilities_row_col(int **tab, int index, int to_update)
{
	if (index >= 0 && index <= 3)
		ft_update_possibilities_row(tab, 0, to_update);
	else if (index >= 4 && index <= 7)
		ft_update_possibilities_row(tab, 4, to_update);
	else if (index >= 8 && index <= 11)
		ft_update_possibilities_row(tab, 8, to_update);
	else if (index >= 12 && index <= 15)
		ft_update_possibilities_row(tab, 12, to_update);
	if (index == 0 || index == 4 || index == 8 || index == 12)
		ft_update_possibilities_col(tab, 0, to_update);
	else if (index == 1 || index == 5 || index == 9 || index == 13)
		ft_update_possibilities_col(tab, 1, to_update);
	else if (index == 2 || index == 6 || index == 10 || index == 14)
		ft_update_possibilities_col(tab, 2, to_update);
	else if (index == 3 || index == 7 || index == 11 || index == 15)
		ft_update_possibilities_col(tab, 3, to_update);
}

void	ft_remove_possibilities(int **tab, int index)
{
	int	i;
	i = 0;
	while (i <= 3)
	{
		tab[index][i] = 0;
		i++;
	}
}
