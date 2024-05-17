/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inp_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julombar <julombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:20:51 by julombar          #+#    #+#             */
/*   Updated: 2024/02/18 20:57:01 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <unistd.h>
#include<stdio.h>

int	count_inp(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	fill_params_arr(char *arg, int *arr)
{
	int	i;
	int	arr_i;

	i = 0;
	arr_i = 0;
	while (arg[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (arg[i] > '0' && arg[i] < '5')
			{
				arr[arr_i] = arg[i] - '0';
				arr_i++;
			}
			else
			{
				return (0);
			}		
		}
		i++;
	}	
	return (1);
}

int	*ft_init_params(int *params)
{
	params = malloc(sizeof(int) * 16);
	return (params);
}

int	*check_args(int argc, char *argv[], int params[])
{
	int	inp_nb;
	int	inp_val;

	if (argc != 2)
		return (NULL);
	inp_nb = count_inp(argv[1]);
	params = ft_init_params(params);
	if (inp_nb == 31)
	{
		inp_val = fill_params_arr(argv[1], params);
		if (inp_val != 1)
		{
			write(1, "Error\n", 6);
			return (NULL);
		}
		return (params);
	}
	else
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
}
