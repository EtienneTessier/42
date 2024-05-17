/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:26:14 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 19:04:07 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*new_tab;

	i = 0;
	range = max - min;
	if (range <= 0)
		return (NULL);
	new_tab = malloc(sizeof(int) * range);
	if (!new_tab)
		return (NULL);
	while (min < max)
	{
		new_tab[i] = min;
		i++;
		min++;
	}
	return (new_tab);
}
/*
#include<stdio.h>
int main()
{
	int	*range;
	int	i;
	int min = -5;
	int max = 19;

	range = ft_range(min, max);
	i = 0;
	while (i < ((min - max) * - 1) - 1)
	{
		printf("%d ", range[i]);
		i++;
	}
}*/
