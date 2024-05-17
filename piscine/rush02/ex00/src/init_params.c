/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:39:12 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 19:20:37 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

char	**ft_init_tab(int nb_parts)
{
	int		i;
	int		j;
	char	**tab;

	tab = malloc(sizeof(char *) * nb_parts);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nb_parts)
	{
		tab[i] = malloc(sizeof(char) * 3);
		j = 0;
		while (j < 3)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
	if (!tab)
		return (NULL);
	return (tab);
}

char	**ft_fill_tab(char **tab, char *checked_input, int str_len)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (checked_input[i] != '\0')
	{
		j = 0;
		while (j < 3 && i + j < str_len)
		{
			tab[k][j] = checked_input[i + j];
			j++;
		}
		k++;
		i += j;
	}
	free(checked_input);
	return (tab);
}

char	**ft_init_param(char *argv, int *nb_parts)
{
	char	**tab;
	char	*checked_input;
	int		checked_len;

	checked_input = ft_check_input(argv);
	if (!checked_input)
		return (NULL);
	checked_len = ft_strlen(checked_input);
	*nb_parts = ft_count_parts(checked_len);
	tab = ft_init_tab(*nb_parts);
	ft_fill_tab(tab, checked_input, checked_len);
	return (tab);
}
