/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:01:06 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 23:09:14 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		**ft_init_possibilities_tab(int **tab);
int		*ft_init_output_tab(int *output);
int		ft_check_possibilities_col(int **tab, int *output);
int		count_inp(char *arg);
int		*check_args(int argc, char *argv[], int params[]);
int		control_and_write(int **tab, int nbr, int output[], int position);
void	ft_update_possibilities_param(int **tab, int *param);
void	ft_update_1(int **tab, int *param, int *output);
void	ft_update_4(int **tab, int *param, int *output);
void	print_possibilities(int **tab);
void	ft_update_possibilities_row_col(int **tab, int index, int to_update);
void	ft_free(int **tab, int *output);
void	ft_check_possibilities(int **tab, int *output);
void	display_outputs(int arr[]);
void	ft_update_2_col_up(int **tab, int *output, int *params);
void	ft_update_2_col_down(int **tab, int *output, int *params);
void	ft_update_2_row_left(int **tab, int *output, int *params);
void	ft_update_2_row_right(int **tab, int *output, int *params);
void	ft_update_3_row_left_1(int **tab, int *output, int *params);
void	ft_update_3_row_left_2(int **tab, int *output, int *params);
void	ft_update_3_row_right_1(int **tab, int *output, int *params);
void	ft_update_3_row_right_2(int **tab, int *output, int *params);
void	ft_update_3_col_up_1(int **tab, int *output, int *params);
void	ft_update_3_col_up_2(int **tab, int *output, int *params);
void	ft_update_3_col_down_1(int **tab, int *output, int *params);
void	ft_update_3_col_down_2(int **tab, int *output, int *params);
void	ft_check_rules(int **tab, int *output, int *params);
void	ft_remove_possibilities(int **tab, int index);

#endif
