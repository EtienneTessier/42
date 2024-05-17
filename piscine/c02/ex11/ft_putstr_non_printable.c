/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicjousl <nicjousl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:19:49 by nicjousl          #+#    #+#             */
/*   Updated: 2024/02/19 00:38:08 by nicjousl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putcharhexa(int c)
{	
	const char	*base = "0123456789abcdef";

	ft_putchar('\\');
	if (c / 16 > 0)
	{
		ft_putchar(base[c / 16]);
		ft_putchar(base[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putcharhexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
int		main()
{
	char *c = "Coucou\ntu va\ns bien\n ?";
	ft_putstr_non_printable(c);
}*/
