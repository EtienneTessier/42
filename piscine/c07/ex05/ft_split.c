/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:33:41 by etessier          #+#    #+#             */
/*   Updated: 2024/02/23 12:36:59 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i] || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		if (is_separator(str[i - 1], charset)
			&& (!is_separator(str[i], charset)))
			nb_words++;
		i++;
	}
	return (nb_words);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*allocate_str(char *src, int len)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	while (src[i] && i < len)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_words;
	int		i;
	int		j;
	char	**splited;

	nb_words = count_words(str, charset);
	splited = malloc(sizeof(char *) * nb_words + 1);
	if (splited == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while ((str[i] != '\0') && (j < nb_words))
	{
		while (is_separator(str[i], charset) && str[i] != '\0')
			i++;
		splited[j] = allocate_str(&str[i], word_len(&str[i], charset));
		j++;
		i += word_len(&str[i], charset);
	}
	splited[j] = 0;
	return (splited);
}
/*
int main(int argc, char **argv)
{
    char **result;
    int i = 0;
    if (argc == 3)
    {
        result = ft_split(argv[1], argv[2]);
        while (result[i])
        {
            printf("%s \n", result[i]);
            i++;
        }
    }
    return (0);
}*/
