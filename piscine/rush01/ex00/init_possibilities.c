/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_possibilities.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:05:57 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 18:40:26 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	**ft_init_possibilities_tab(int **tab)
{
	int	i;
	int	j;

	i = 0;
	tab = malloc(16 * 4 * sizeof(int));
	if (tab == NULL)
		return (tab);
	while (i <= 15)
	{
		tab[i] = malloc(4 * sizeof(int));
		i++;
	}
	i = 0;
	while (i <= 15)
	{
		j = 0;
		while (j <= 3)
		{
			tab[i][j] = j + 1;
			j++;
		}
		i++;
	}
	return (tab);
}

int	*ft_init_output_tab(int *output)
{
	int	i;

	i = 0;
	output = malloc(16 * sizeof(int));
	if (output == NULL)
		return (output);
	while (i <= 15)
	{
		output[i] = 0;
		i++;
	}
	return (output);
}

void	print_possibilities(int **tab)
{
	int	j;
	int	i;

	i = 0;
	while (i <= 15)
	{
		j = 0;
		printf("case %2d = ", i);
		while (j <= 3)
		{
			printf("%d ", tab[i][j]);
			j++;
		}
		if ((i + 1) % 4 == 0)
			printf("\n");
		i++;
	}
	printf("\n");
}
