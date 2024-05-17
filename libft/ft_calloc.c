/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:14:06 by etienne           #+#    #+#             */
/*   Updated: 2024/04/10 10:04:32 by etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nb, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (nb < 1 || size < 1)
	{
		str = malloc(1);
		return (str);
	}
	str = malloc(nb * size);
	if (!str)
		return (NULL);
	while (i < nb)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
