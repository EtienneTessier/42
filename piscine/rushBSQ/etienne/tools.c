/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:07:52 by etessier          #+#    #+#             */
/*   Updated: 2024/02/28 12:33:48 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    return (i);
}

int	ft_is_printable_char(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int	ft_atoimique(char *str, int size)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < size)
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return (result);
}
