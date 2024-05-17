/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:12:36 by etessier          #+#    #+#             */
/*   Updated: 2024/02/11 08:47:04 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	element;

	i = 0;
	while (i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = element;
		i++;
	}
}
/*
#include<stdio.h>

int	main(void)
{
	int test[] = {1,2,3,4,5,6,7};
	ft_rev_int_tab(test, 7);
	printf("%d", test[0]);
	printf("%d", test[1]);
	printf("%d", test[2]);
	printf("%d", test[3]);
	printf("%d", test[4]);
	printf("%d", test[5]);
	printf("%d", test[6]);
	return (0);
}*/
