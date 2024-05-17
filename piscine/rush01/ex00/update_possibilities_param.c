/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_possibilities_param.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:02:24 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 17:47:40 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_update_poss_param_row(int **tab, int i_tab, int *param, int i_param)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (param[i_param + i] == 3)
		{
			tab[i_tab + i][2] = 0;
		}
		i++;
	}
}

void	ft_update_poss_param_col(int **tab, int i_tab, int *param, int i_param)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 12)
	{
		if (param[i_param + j] == 3)
		{
			tab[i_tab + i][2] = 0;
		}
		i += 4;
		j++;
	}
}

void	ft_update_possibilities_param(int **tab, int *param)
{
	ft_update_poss_param_row(tab, 0, param, 0);
	ft_update_poss_param_row(tab, 12, param, 4);
	ft_update_poss_param_col(tab, 0, param, 8);
	ft_update_poss_param_col(tab, 3, param, 12);
}
