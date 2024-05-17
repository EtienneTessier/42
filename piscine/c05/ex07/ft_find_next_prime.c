/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:57:26 by etessier          #+#    #+#             */
/*   Updated: 2024/02/20 14:52:54 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*
#include<stdio.h>
#include<limits.h>
int main()
{
	int nb;
	nb = 2; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 4; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 7; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 15; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 17; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 15641535; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 2154212;
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = 345462354;
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
	nb = INT_MAX; 
	printf("nb = %d, next prime is : %d\n", nb, ft_find_next_prime(nb));
}*/
