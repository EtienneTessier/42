/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:33:22 by etessier          #+#    #+#             */
/*   Updated: 2024/05/24 17:24:10 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_trt_params(char c, va_list params)
{
	if (c == 'c')
		return (ft_trt_chars(params, 'c'));
	else if (c == 's')
		return (ft_trt_chars(params, 's'));
	else if (c == 'd' || c == 'i' || c == 'u')
		return (ft_trt_nbr(params, 10, 'l'));
	else if (c == 'p' || c == 'x')
		return (ft_trt_nbr(params, 16, 'l'));
	else if (c == 'X')
		return (ft_trt_nbr(params, 16, 'u'));
	else if (c == '%')
		return (ft_putchar_fd('%', 1), 1);
	else 
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int	total_print;
	int	temp;
	int	i;

	if (!str)
		return (-1);
	total_print = 0;
	i = 0;
	va_start(params, str);
	while (str[i])
	{
		if (str[i] != '%' && str[i] != '\0')
		{
			ft_putchar_fd(str[i], 1);
			total_print++;
		}
		else if (str[i] == '%')
		{
			temp = ft_trt_params(str[++i], params);
			if (temp < 0)
				return (-1);
			total_print += temp;
		}
		else
			return (-1);
		i++;
	}
	va_end(params);
	return (total_print);
}
