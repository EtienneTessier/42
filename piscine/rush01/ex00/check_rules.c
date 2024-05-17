/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belgadid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:44:34 by belgadid          #+#    #+#             */
/*   Updated: 2024/02/18 23:29:03 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "rush.h"

void	ft_check_rules(int **tab, int *output, int *params)
{
	ft_update_2_col_up(tab, output, params);
	ft_update_2_col_down(tab, output, params);
	ft_update_2_row_left(tab, output, params);
	ft_update_2_row_right(tab, output, params);
	ft_update_3_col_up_1(tab, output, params);
	ft_update_3_col_up_2(tab, output, params);
	ft_update_3_col_down_1(tab, output, params);
	ft_update_3_col_down_2(tab, output, params);
	ft_update_3_row_left_1(tab, output, params);
	ft_update_3_row_left_2(tab, output, params);
	ft_update_3_row_right_1(tab, output, params);
	ft_update_3_row_right_2(tab, output, params);
}
