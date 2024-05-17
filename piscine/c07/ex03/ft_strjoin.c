/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:04:15 by etessier          #+#    #+#             */
/*   Updated: 2024/02/28 17:11:28 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_full_len(char **strs, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_len;
	char	*new_str;

	i = 0;
	if (size == 0 || (!strs))
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	full_len = count_full_len(strs, size) + ft_strlen(sep) * (size - 1);
	new_str = malloc(sizeof(char) * full_len + 1);
	if (!new_str)
		return (NULL);
	new_str[i] = '\0';
		i = -1;
	while (++i < size)
	{
		new_str = ft_strcat(new_str, strs[i]);
		if (i < size - 1)
			new_str = ft_strcat(new_str, sep);
	}
	return (new_str);
}

#include<stdio.h>
int main(int argc, char **argv)
{
	char	*joined;
	
	joined = ft_strjoin(argc, argv, "X");
	printf("%s", joined);
	free(joined);
}
