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
#include <stdint.h>

void	*ft_calloc(size_t nb, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (nb * size > SIZE_MAX || size > SIZE_MAX)
	{
		str = malloc(1);
		return ((void *)str);
	}
	if (nb == 0 || size == 0)
	{
		str = malloc(1);
		return ((void *)str);
	}
	str = malloc(nb * size);
	if (!str)
		return (NULL);
	while (i < nb * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
