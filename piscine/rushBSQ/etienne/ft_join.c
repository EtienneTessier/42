/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:23:29 by etessier          #+#    #+#             */
/*   Updated: 2024/02/28 12:46:49 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rushbsq.h"
#include<stdio.h>
#include<stdlib.h>

//  input = 2 chaines de caracteres
//  mesure la taille de chacune
//  malloc une nouvelle chaine a la taille des 2 + 1
//  strcat de la 2e dans la 1er

char    *ft_strcat(char *dest, char *src, int total_len)
{
    int i;
    int j;
    char    *joined;

    joined = malloc(sizeof(char) * total_len);
    if (! joined)
        return (NULL);
    i = 0;
    while (dest[i] != '\n' && dest[i] != '\0')
    {
        joined[i] = dest[i];
        i++;
    }
    j = 0;
    while (src[j] != '\n')
    {
        joined[i + j] = src[j];
        j++;
    }
    joined[i + j] = '\n';
    joined[i + j + 1] = '\0';
    return (joined);
}

char    *ft_strjoin(char *dest, char *src)
{
    int     dest_len;
    int     src_len;
    int     total_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    total_len = dest_len + src_len + 2;
    return (ft_strcat(dest, src, total_len));
}