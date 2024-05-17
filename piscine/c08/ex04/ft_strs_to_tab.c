/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:21:06 by etessier          #+#    #+#             */
/*   Updated: 2024/02/28 16:21:08 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s_tab;

	s_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s_tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = malloc(sizeof(char) * ft_strlen(s_tab[i].str) + 1);
		if (!s_tab[i].copy)
			return (NULL);
		s_tab[i].copy = ft_strcpy(s_tab[i].copy, s_tab[i].str);
		i++;
	}
	s_tab[ac].size = 0;
	s_tab[ac].str = 0;
	s_tab[ac].copy = 0;
	return (s_tab);
}
