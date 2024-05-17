/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_units.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:37:10 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 19:19:53 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<stdio.h>

void	ft_conv_unit(char *dict, int nb_parts, int index)
{
	char	unit[38];
	char	*index_start;
	int		i;

	unit[0] = '1';
	i = 1;
	while (i <= (nb_parts - 1) * 3)
	{
		unit[i] = '0';
		i++;
	}
	unit[i] = '\0';
	index_start = ft_strstr(dict, unit);
	ft_print_words(index_start, index);
}
