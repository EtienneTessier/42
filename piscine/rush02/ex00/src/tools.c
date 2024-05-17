/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:22:09 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 19:21:09 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<stdlib.h>
#include<unistd.h>

int	ft_count_parts(int str_len)
{
	int	nb_parts;

	nb_parts = str_len / 3;
	if (str_len % 3 != 0)
		nb_parts++;
	return (nb_parts);
}

int	ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
