/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:22:25 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 19:25:12 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<stdlib.h>

int	ft_control_input(char *src)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((src[i] == ' ' || src[i] >= '\t') && src[i] <= '\r')
		i++;
	while (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign == -1)
		return (-1);
	return (i);
}

char	*ft_fill_input(int src_len, int dest_len, char *src, char *dest)
{
	int	i;

	i = 0;
	while (src_len > 0)
	{
		dest[dest_len - 1] = src[src_len - 1];
		dest_len--;
		src_len--;
		i++;
	}
	while (dest_len > 0)
	{
		dest[dest_len - 1] = '0';
		dest_len--;
	}
	return (dest);
}

char	*ft_check_input(char *src)
{
	char	*dest;
	int		src_len;
	int		dest_len;
	int		index;

	index = ft_control_input(src);
	if (index == -1)
	{
		ft_putstr("Signe invalide\n");
		return (NULL);
	}
	src_len = 0;
	while ((src[src_len + index] != '\0')
		&& (src[src_len + index] >= '0')
		&& (src[src_len + index] <= '9'))
		src_len++;
	dest_len = src_len;
	while (dest_len % 3 != 0)
		dest_len++;
	dest = malloc(sizeof(char) * (dest_len + 1));
	if (dest == NULL)
		return (dest);
	dest[dest_len] = '\0';
	dest = ft_fill_input(src_len, dest_len, &src[index], dest);
	return (dest);
}
