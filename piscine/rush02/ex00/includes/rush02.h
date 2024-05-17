/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:40:50 by etessier          #+#    #+#             */
/*   Updated: 2024/02/25 18:59:29 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

// prints
void	ft_print_tab(char **tab, int str_len);

void	ft_print_words(char *dict, int i);

char	*ft_strstr(char *str, char *to_find);

// conv_number
void	ft_conv_parts(char *tab, int nb_parts, char *dict, int i);

// conv_units
void	ft_conv_unit(char *dict, int nb_parts, int i);

// tools
int		ft_count_parts(int str_len);

int		ft_strlen(char *argv);

void	ft_putchar(char c);

void	ft_putstr(char *str);

// init_params
char	**ft_init_param(char *argv, int *nb_parts);

char	*ft_check_input(char *src);

// check_input
char	*ft_check_input(char *src);

// dict
char	*ft_read_dict(char *dict_path);

// free
void	ft_free(char **tab, int nb_parts, char *dict);

#endif
