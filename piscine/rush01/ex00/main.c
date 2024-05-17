/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:43:44 by etessier          #+#    #+#             */
/*   Updated: 2024/02/18 23:20:38 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush.h"
#include<stdio.h>

int	main(int argc, char *argv[])
{
	int	**tab;
	int	*output;
	int	*params;
	int	i;

	i = 0;
	params = check_args(argc, argv, params);
	tab = ft_init_possibilities_tab(tab);
	output = ft_init_output_tab(output);
	if (tab == NULL || output == NULL || params == NULL)
	{
		printf("erreur init tabs\n");
		return (0);
	}
	ft_update_1(tab, params, output);
	ft_update_4(tab, params, output);
	printf("check param\n");
	display_outputs(output);
	
	ft_check_possibilities(tab, output);
	printf("check poss\n");
	display_outputs(output);

	ft_check_rules(tab, output, params);	
	printf("check rules\n");
	display_outputs(output);
	print_possibilities(tab);
	ft_check_possibilities(tab, output);
	ft_check_possibilities(tab, output);
	printf("check rules\n");

	display_outputs(output);


	ft_free(tab, output);
}
