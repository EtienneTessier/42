/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:43:22 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 21:08:15 by bbodere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<unistd.h>
#include<stdio.h>

int	ft_strcmp_improved(char *str, char *to_find)
{
	int	str_len;
	int	i;

	str_len = 0;
	while (str[str_len] >= '0' && str[str_len] <= '9')
		str_len++;
	i = 0;
	while ((str[i] != '\0' || to_find[i] != '\0') && i < str_len)
	{
		if (str[i] > to_find[i])
			return (1);
		else if (str[i] < to_find[i])
			return (-1);
		i++;
	}
	return (0);
}

int	ft_pas_le_back(char *str, int index)
{
	int	i;

	i = 0;
	while (str[index - i] >= '0' && str[index - i] <= '9')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				k = ft_pas_le_back(str, i) - 1;
				if (ft_strcmp_improved(str + i - k, to_find) == 0)
					return (str + i);
			}
			j++;
		}
		i++;
	}
	ft_putstr("Dict Error\n");
	return (NULL);
}

void	ft_print_words(char *dict, int index)
{
	int	i;

	i = 0;
	while (dict[i] != '\0' && dict[i] != '\n')
	{
		while (dict[i] < 'a' || dict[i] > 'z')
			i++;
		while (dict[i] >= 'a' && dict[i] <= 'z')
		{
			ft_putchar(dict[i]);
			i++;
		}
	}
	(void) index;
	ft_putchar(' ');
}
/*
void	ft_print_tab(char **tab, int str_len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (k < str_len)
	{
		j = 0;
		printf("------   %d   ------\n", i);
		while (j < 3 && tab[i][j] != '\0')
		{
			printf("tab[%d][%d] = %c\n", i, j, tab[i][j]);
			j++;
		}
		i++;
		k = k + j;
	}
}*/
