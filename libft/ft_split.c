/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:06:01 by etienne           #+#    #+#             */
/*   Updated: 2024/04/16 11:16:03 by etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_is_sep(char to_test, char sep)
{
	if (to_test == sep || to_test == '\0')
		return (1);
	return (0);
}

static int	ft_count_parts(char const *s, char c)
{
	int	i;
	int	word_count;
	int	new_word;

	i = 0;
	word_count = 0;
	new_word = 1;
	while (s[i] != '\0')
	{
		if (new_word && !ft_is_sep(s[i], c))
		{
			word_count++;
			new_word = 0;
		}
		new_word = ft_is_sep(s[i], c);
		i++;
	}
	return (word_count);
}

static int	ft_wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (!ft_is_sep(s[i], c))
		i++;
	return (i);
}

static char	*ft_split_word(char const *s, char c, int *i)
{
	int		j;
	int		word_len;
	char	*dest;

	j = 0;
	word_len = ft_wordlen(s, c);
	dest = malloc(sizeof(char) * (word_len + 1));
	if (!dest)
		return (NULL);
	while (j < word_len)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	while (ft_is_sep(s[j], c))
		j++;
	*i += j;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		nb_words;
	char	**splited;

	nb_words = ft_count_parts(s, c);
	splited = malloc(sizeof(char *) * (nb_words + 1));
	if (!splited)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_is_sep(s[i], c))
		i++;
	while (j < nb_words)
	{
		splited[j] = ft_split_word(&s[i], c, &i);
		j++;
	}
	splited[j] = '\0';
	return (splited);
}
