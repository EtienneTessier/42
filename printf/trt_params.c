/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trt_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:24:47 by etienne           #+#    #+#             */
/*   Updated: 2024/05/25 17:26:31 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int ft_trt_chars(va_list params, char type)
{
    char    c;
    char    *str;
    
    if (type == 'c')
    {
        c = va_arg (params, int);
        if (!ft_isprint(c))
            return (-1);
        ft_putchar_fd(c, 1);
        return (1);
    }
    else if (type == 's')
    {
        str = va_arg (params, char *);
        if (!str)
            return (ft_printf("(null)"));
        ft_putstr_fd(str, 1);
        return (ft_strlen(str));
    }
    return (-1);
}

int ft_size_nb_base(long nb, int base)
{
    int size;

    size = 0;
    if (nb < 0)
    {
        nb *= -1;
        size ++;
    }
    while (nb > base - 1)
    {
        nb /= base;
        size++;
    }
    return (++size);
}

int ft_trt_nbr(va_list params, int base, char top_case)
{
    long nb;

    nb = va_arg (params, int);
    if (!nb)
        return (-1);
    if (base == 10)
        ft_putnbr_base(nb, "0123456789");
    else if (base == 16 && top_case == 'l')
        ft_putnbr_base(nb, "0123456789abcdef");
    else if (base == 16 && top_case == 'u')
        ft_putnbr_base(nb, "0123456789ABCDEF");
    else
        return (-1);
    return (ft_size_nb_base(nb, base));
}