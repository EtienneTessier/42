/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:35:49 by etessier          #+#    #+#             */
/*   Updated: 2024/05/24 17:25:31 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_control_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= ' ' || base[i] > '~')
			return (0);
		if (base[i] == '+' || base[i] == '-' )
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_print_base(long nbr, char *base, int base_size)
{
	char		a;
	long int	n;

	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= base_size)
		ft_print_base(n / base_size, base, base_size);
	a = base[n % base_size];
	ft_putchar_fd(a, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	long_nbr;

	long_nbr = nbr;
	base_size = ft_control_base(base);
	if (base_size < 2)
		return ;
	ft_print_base(long_nbr, base, base_size);
}
