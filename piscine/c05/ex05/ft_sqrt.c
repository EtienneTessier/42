/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:36:31 by etessier          #+#    #+#             */
/*   Updated: 2024/02/20 15:37:02 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i * i <= nb)
	{
		if (i == 46340)
		{
			if (nb != 2147395600)
				return (0);
			else
				return (i);
		}
		i++;
	}
	if ((i - 1) * (i - 1) == nb)
		return (i - 1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<limits.h>
int main()
{
	int nb = 100;
	printf("sqrt(%d) = %d", nb, ft_sqrt(nb));
}*/
