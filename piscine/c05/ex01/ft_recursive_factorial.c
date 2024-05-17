/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:31:07 by etessier          #+#    #+#             */
/*   Updated: 2024/02/13 15:45:01 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
	int test = -10;
	printf("!%d =%d", test, ft_recursive_factorial(test));
	return 0;
}*/
