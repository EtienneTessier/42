/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:27:27 by etessier          #+#    #+#             */
/*   Updated: 2024/02/09 13:51:38 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_is_new_word(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	new_word = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			new_word = 0;
		}
		new_word = ft_is_new_word(str[i]);
	i++;
	}
	return (str);
}
