/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:43:50 by etienne           #+#    #+#             */
/*   Updated: 2024/04/18 16:57:29 by etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_strlen(char *str);

int		ft_atoi(const char *str);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, char *src, size_t size);

char	*ft_itoa(int n);

char	*ft_strdup(const char *str);

char	*ft_strchr(char *str, char c);

char	*ft_strrchr(char *str, char c);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strtrim(const char *s1, const char *set);

char	*ft_strnstr(const char *str, const char *to_find, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	**ft_split(char const *s, char c);

void	*ft_memset(void *ptr, int x, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_calloc(size_t nb, size_t size);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	ft_bzero(void *ptr, size_t n);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
