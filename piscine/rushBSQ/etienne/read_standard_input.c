/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_standard_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:23:40 by etessier          #+#    #+#             */
/*   Updated: 2024/02/28 12:46:35 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>

int ft_control_nb_rows(char *params)
{
    int param_len;

    param_len = 0;
    while(params[param_len] != '\n')
        param_len++;
    return (ft_atoimique(params, param_len));
}

char    *ft_read_stdin(void)
{
	char	buf[1000];
    char    *standard_read;
	int		nb_read;
    int     nb_lignes;
    int     i;

    nb_lignes = 0;
    i = 0;
	nb_read = 0;
    standard_read = malloc(1);
    standard_read[0] = '\0';
    while (nb_read != -1)
	{
        nb_read = read(0, buf, 1000);
        if (nb_lignes == 0)
            nb_lignes = ft_control_nb_rows(buf);
        if (nb_lignes < 1)
            return (NULL);
        standard_read = ft_strjoin(standard_read, buf);
        printf("standard_read = %s", standard_read);
        i++;
        if (i == nb_lignes + 1)
            break;
    }
	buf[nb_read] = '\0';
	return 0;
}

int main()
{
    char    *params;
    params = ft_read_stdin();
    return (0);
}
