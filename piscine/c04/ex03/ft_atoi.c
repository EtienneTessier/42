/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:30:35 by etessier          #+#    #+#             */
/*   Updated: 2024/02/14 08:55:41 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include<stdio.h>

int	ft_control_sign(char *str, int *sign, int i)
{
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_control_spaces(char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	result;
	int	index;
	int	sign;

	index = 0;
	result = 0;
	sign = 1;
	index = ft_control_spaces(str, index);
	index = ft_control_sign(str, &sign, index);
	while (str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += (str[index] - '0');
		index++;
	}
	return (result * sign);
}
/*
#include<stdio.h>
int main()
{
	int test = ft_atoi(" \f\n  \r\t\v  --+--154q5");
	printf("test = %d", test);
	return 0;
}*/
