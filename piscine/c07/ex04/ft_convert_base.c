/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:56:35 by etessier          #+#    #+#             */
/*   Updated: 2024/02/22 17:43:35 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_control_spaces_sign(char *str, int *sign)
{
	int	i;

	*sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_conv_char_base(char *str, char *base, int base_size, int index)
{
	int	i;
	int	j;
	int	str_size;
	int	result;

	result = 0;
	i = 0;
	str_size = 0;
	while (str[index + str_size] != '\0')
	{
		if (! ft_is_in_base(str[index + str_size], base))
			break ;
		str_size++;
	}
	while (str_size > 0)
	{
		j = 0;
		while (str[index + i] != base[j])
			j++;
		result = result + (j * ft_power(base_size, str_size - 1));
		i++;
		str_size--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	base_size;
	int	index;
	int	j;

	base_size = 0;
	while (base[base_size] != '\0')
	{
		if (base[base_size] <= ' ' || base[base_size] > '~')
			return (0);
		if (base[base_size] == '+' || base[base_size] == '-' )
			return (0);
		j = base_size + 1;
		while (base[j] != '\0')
		{
			if (base[base_size] == base[j])
				return (0);
			j++;
		}
		base_size++;
	}	
	if (base_size < 2)
		return (0);
	index = ft_control_spaces_sign(str, &sign);
	return (ft_conv_char_base(str, base, base_size, index) * sign);
}
/*
#include<stdio.h>
int main()
{
	int test = ft_atoi_base("-7FFF", "0123456789ABCDEF");
	printf("test = %d\n", test);
	printf("%d\n", ft_atoi_base("0110101011", "01"));
	printf("%d\n", ft_atoi_base("01101A01101", "01"));
	printf("%d\n", ft_atoi_base("01101", "01"));
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
	return 0;
}*/
