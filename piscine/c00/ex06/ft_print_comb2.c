/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:18:28 by etessier          #+#    #+#             */
/*   Updated: 2024/02/08 10:21:41 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_char(char a)
{
	write(1, &a, 1);
}

void	ft_conv_char(int i)
{
	int	tens;
	int	unit;

	if (i < 10)
	{
		ft_put_char('0');
		ft_put_char(i + '0');
	}
	else
	{
		tens = i / 10;
		unit = i % 10;
		ft_put_char(tens + '0');
		ft_put_char(unit + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_conv_char(a);
			ft_put_char(' ');
			ft_conv_char(b);
			if (a == 98 && b == 99)
			{
				return ;
			}
			ft_put_char(',');
			ft_put_char(' ');
			b++;
		}
		a++;
	}
	return ;
}
