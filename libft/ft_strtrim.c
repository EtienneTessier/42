/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:28:50 by etienne           #+#    #+#             */
/*   Updated: 2024/04/10 15:55:04 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	ft_is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_count_set(const char *str, const char *set)
{
	int	i;
	int	set_count;

	i = 0;
	set_count = 0;
	while (str[i] != '\0')
	{
		if (ft_is_set(str[i], set))
			set_count++;
		i++;
	}
	return (set_count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	char	*trim;

	trim = malloc(sizeof(char) * (ft_strlen(s1) - (ft_count_set(s1, set)) + 1));
	if (!trim)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!ft_is_set(s1[i], set))
		{
			trim[j] = s1[i];
			j++;
		}
		i++;
	}
	trim[j] = '\0';
	return (trim);
}
