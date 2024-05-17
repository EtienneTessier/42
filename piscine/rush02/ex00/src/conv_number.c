/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:47:39 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 20:57:23 by bbodere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<stdio.h>
#include<stdlib.h>

void	ft_conv_1(char *dict, char number, int *print_unit, int i)
{
	char	to_find[2];
	char	*index_start;

	if (number == '0')
		return ;
	to_find[0] = number;
	to_find[1] = '\0';
	index_start = ft_strstr(dict, to_find);
	if (index_start == NULL)
		return ;
	ft_print_words(index_start, i);
	*print_unit = 1;
}

void	ft_conv_10(char *dict, char number, int *print_unit, int i)
{	
	char	to_find[3];
	char	*index_start;

	if (number == '0')
		return ;
	to_find[0] = number;
	to_find[1] = '0';
	to_find[2] = '\0';
	index_start = ft_strstr(dict, to_find);
	if (index_start == NULL)
		return ;
	ft_print_words(index_start, i);
	*print_unit = 1;
}

void	ft_conv_10bis(char *dict, char *number, int *print_unit, int i)
{
	char	to_find[3];
	char	*index_start;

	to_find[0] = number[0];
	to_find[1] = number[1];
	to_find[2] = '\0';
	index_start = ft_strstr(dict, to_find);
	if (index_start == NULL)
		return ;
	ft_print_words(index_start, i);
	*print_unit = 1;
}

void	ft_conv_100(char *dict, char number, int *print_unit, int i)
{
	char	to_find[4];
	char	*index_start;

	if (number == '0')
		return ;
	ft_conv_1(dict, number, print_unit, i);
	to_find[0] = '1';
	to_find[1] = '0';
	to_find[2] = '0';
	to_find[3] = '\0';
	index_start = ft_strstr(dict, to_find);
	if (index_start == NULL)
		return ;
	ft_print_words(index_start, i);
	*print_unit = 1;
}

void	ft_conv_parts(char *tab, int nb_parts, char *dict, int i)
{
	int	print_unit;

	print_unit = 0;
	if (tab[0] != '0')
		ft_conv_100(dict, tab[0], &print_unit, i);
	if (tab[1] == '1')
		ft_conv_10bis(dict, &tab[1], &print_unit, i);
	else
	{
		ft_conv_10(dict, tab[1], &print_unit, i);
		ft_conv_1(dict, tab[2], &print_unit, i);
	}
	if (nb_parts > 1 && print_unit == 1)
	{
		ft_conv_unit(dict, nb_parts, i);
	}
}
