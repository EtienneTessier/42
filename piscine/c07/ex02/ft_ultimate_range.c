/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:51:02 by etessier          #+#    #+#             */
/*   Updated: 2024/02/27 18:17:51 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = ft_range(min, max);
	*range = tab;
	return (max - min);
}

/*
#include<stdio.h>
int    main(void)
{
    int    *range;
    int    min = -5;
    int    max = 15;
    int    size = max - min;
    ft_ultimate_range(&range, min, max);
    for(int i = 0;i < size; i++)
        printf("%d\n", range[i]);
    free(range);
    return 0;
}*/
