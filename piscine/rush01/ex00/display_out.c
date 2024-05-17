/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julombar <julombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:49:53 by julombar          #+#    #+#             */
/*   Updated: 2024/02/18 13:20:58 by julombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	display_outputs(int arr[])
{
	int		i;
	char	temp;

	i = 0;
	while (i < 16)
	{
		temp = arr[i] + '0';
		write(1, &temp, 1);
		write(1, " ", 1);
		temp = arr[i + 1] + '0';
		write(1, &temp, 1);
		write(1, " ", 1);
		temp = arr[i + 2] + '0';
		write(1, &temp, 1);
		write(1, " ", 1);
		temp = arr[i + 3] + '0';
		write(1, &temp, 1);
		write(1, "\n", 1);
		i += 4;
	}
}
