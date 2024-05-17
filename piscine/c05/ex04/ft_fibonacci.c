/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:20:57 by etessier          #+#    #+#             */
/*   Updated: 2024/02/19 15:54:24 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>
int main()
{
	int index = -5;
	printf("fibonacci index %d = %d\n", index, ft_fibonacci(index));
	index = 0;
	printf("fibonacci index %d = %d\n", index, ft_fibonacci(index));
	index = 1;
	printf("fibonacci index %d = %d\n", index, ft_fibonacci(index));
	index = 8;
	printf("fibonacci index %d = %d\n", index, ft_fibonacci(index));
	index = 12;
	printf("fibonacci index %d = %d\n", index, ft_fibonacci(index));
	index = 15;
	printf("fibonacci index %d = %d\n", index, ft_fibonacci(index));
}*/
