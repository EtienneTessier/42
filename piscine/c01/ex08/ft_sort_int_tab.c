/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:47:40 by etessier          #+#    #+#             */
/*   Updated: 2024/02/11 09:21:20 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*#include<stdio.h>
int main()
{
	int tab[] = {9, 1, 8 ,9 ,4, 1, 2};
	printf("tab = {%d,%d,%d,%d,%d,%d,%d}\n", 
	tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]);
	ft_sort_int_tab(tab, 7);
	printf("tab = {%d,%d,%d,%d,%d,%d,%d}\n", 
	tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]);
	return 0;
}*/
