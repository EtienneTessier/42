/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:35:25 by juperez           #+#    #+#             */
/*   Updated: 2024/02/10 17:32:54 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

void	rush(int x, int y);

int	ft_str_to_int(char *str)
{
	int	index;
	int	number;

	index = 0;
	number = 0;
	while (str[index] != '\0')
	{
		number *= 10;
		number += (str[index] - '0');
		index++;
	}
	return (number);
}

int	ft_str_is_num(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= '0') && (str[index] <= '9'))
			index++;
		else
			return (FALSE);
	}
	return (TRUE);
}

int	main(int argc, char **argv)
{
	if ((argc == 3) && (ft_str_is_num(argv[1])) && (ft_str_is_num(argv[2])))
		rush(ft_str_to_int(argv[1]), ft_str_to_int(argv[2]));
	else if ((argc == 2) && (ft_str_is_num(argv[1])))
		rush(ft_str_to_int(argv[1]), ft_str_to_int(argv[1]));
	else
		rush(5, 5);
	return (0);
}	
