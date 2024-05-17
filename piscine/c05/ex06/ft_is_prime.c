/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:54:41 by etessier          #+#    #+#             */
/*   Updated: 2024/02/20 14:53:57 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
#include<limits.h>
int main()
{
	int nb = INT_MIN;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 0;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 2;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 4;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 8;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 9;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 17;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 22;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 37;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 90;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 583;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 78451;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = 2147483643;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
	nb = INT_MAX;
	printf("is_prime(%d) = %d\n", nb, ft_is_prime(nb));
}*/
