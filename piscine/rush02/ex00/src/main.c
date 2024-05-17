/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:23:18 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 19:29:50 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/rush02.h"
#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	int		nb_parts;
	int		i;
	char	**tab;
	char	*dict;

	if (argc == 3)
		dict = ft_read_dict(argv[2]);
	else if (argc != 2)
		return (0);
	else
		dict = ft_read_dict("numbers.dict");
	tab = ft_init_param(argv[1], &nb_parts);
	if (!tab || !dict)
		return (0);
	i = 0;
	while (i < nb_parts)
	{
		if (nb_parts == 1)
			ft_conv_parts(tab[i], nb_parts - i, dict, 1);
		else
			ft_conv_parts(tab[i], nb_parts - i, dict, i);
		i++;
	}
	ft_free(tab, nb_parts, dict);
	return (0);
}
