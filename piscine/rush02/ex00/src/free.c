/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:28:55 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 19:20:27 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<stdlib.h>

void	ft_free(char **tab, int nb_parts, char *dict)
{
	int	i;

	i = 0;
	while (i < nb_parts)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	free(dict);
}
