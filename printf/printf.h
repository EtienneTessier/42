/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:33:52 by etessier          #+#    #+#             */
/*   Updated: 2024/05/24 16:34:32 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdbool.h>

int	ft_printf(const char *str, ...);

int ft_trt_chars(va_list params, char type);

int ft_trt_nbr(va_list params, int base, char top_case);

#endif