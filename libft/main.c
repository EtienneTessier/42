/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etessier <etessier@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:58:47 by etienne           #+#    #+#             */
/*   Updated: 2024/05/22 14:43:33 by etessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	ft_revalpha(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

void	ft_revalpha_bis(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int	main(void)
{
	// ft_isalpha
	printf("\nft_isalpha :\n");
	printf("a :%d\n", ft_isalpha('a'));
	printf("C :%d\n", ft_isalpha('C'));
	printf("= :%d\n", ft_isalpha('='));
	printf("0 :%d\n", ft_isalpha('0'));
	printf("V :%d\n", ft_isalpha('V'));
	printf(". :%d\n", ft_isalpha('.'));

	// ft_isdigit
	printf("\nft_isdigit :\n");
	printf("a :%d\n", ft_isdigit('a'));
	printf("1 :%d\n", ft_isdigit('1'));
	printf("= :%d\n", ft_isdigit('='));
	printf("0 :%d\n", ft_isdigit('0'));
	printf("V :%d\n", ft_isdigit('V'));
	printf(". :%d\n", ft_isdigit('.'));

	// ft_isalnum
	printf("\nft_isalnum :\n");
	printf("a :%d\n", ft_isalnum('a'));
	printf("C :%d\n", ft_isalnum('C'));
	printf("= :%d\n", ft_isalnum('='));
	printf("0 :%d\n", ft_isalnum('0'));
	printf("V :%d\n", ft_isalnum('V'));
	printf(". :%d\n", ft_isalnum('.'));

	// ft_isascii
	printf("\nft_isascii :\n");
	printf("-1 :%d\n", ft_isascii(-1));
	printf("C :%d\n", ft_isascii('C'));
	printf("= :%d\n", ft_isascii('='));
	printf("0 :%d\n", ft_isascii('0'));
	printf("128 :%d\n", ft_isascii(128));
	printf(". :%d\n", ft_isascii('.'));

	// ft_isprint
	printf("\nft_isprint :\n");
	printf("\\n :%d\n", ft_isprint('\n'));
	printf("C :%d\n", ft_isprint('C'));
	printf("= :%d\n", ft_isprint('='));
	printf("0 :%d\n", ft_isprint('0'));
	printf("DEL :%d\n", ft_isprint(127));
	printf(". :%d\n", ft_isprint('.'));

	// ft_toupper
	printf("\nft_toupper :\n");
	printf("a :%c\n", ft_toupper('a'));
	printf("A :%c\n", ft_toupper('A'));
	printf("0 :%c\n", ft_toupper('0'));
	printf("l :%c\n", ft_toupper('l'));
	printf(": :%c\n", ft_toupper(':'));

	// ft_tolower
	printf("\nft_tolower :\n");
	printf("a :%c\n", ft_tolower('a'));
	printf("A :%c\n", ft_tolower('A'));
	printf("0 :%c\n", ft_tolower('0'));
	printf("l :%c\n", ft_tolower('l'));
	printf("L :%c\n", ft_tolower('L'));
	printf(": :%c\n", ft_tolower(':'));
	
	// ft_strlen
	printf("\nft_strlen :\n");
	printf("Je suis content:%d\n", ft_strlen("Je suis content"));
	printf(":%d\n", ft_strlen(""));
	printf("Je suis:%d\n", ft_strlen("Je suis"));

	// ft_atoi
	printf("\nft_atoi :\n");
	printf("42: %d\n", ft_atoi("42"));
	printf("+42: %d\n", ft_atoi("+42"));
	printf("-42: %d\n", ft_atoi("-42"));
	printf("  42: %d\n", ft_atoi("  42"));
	printf("--42: %d\n", ft_atoi("--42"));
	printf("42a5: %d\n", ft_atoi("42a5"));
	printf("z42: %d\n", ft_atoi("z42"));
	printf(": %d\n", ft_atoi(""));

	// ft_strlcpy
	printf("\nft_strlcpy :\n");
	char destlcpy[100];
	int result_lcpy;
	result_lcpy = ft_strlcpy(destlcpy, "bonjour", 5);
	printf("bonjour(5), %s, %d\n", destlcpy, result_lcpy);
	result_lcpy = ft_strlcpy(destlcpy, "coucou", 6);
	printf("coucou(6), %s, %d\n", destlcpy, result_lcpy);
	result_lcpy = ft_strlcpy(destlcpy, "salut", 0);
	printf("salut(0), %s, %d\n", destlcpy, result_lcpy);

	// ft_strlcat
	printf("\nft_strlcat :\n");
	char destlcat[100] = "Salut";
	int result_lcat;
	result_lcat = ft_strlcat(destlcat, " ca va?", 11);
	printf(" ca va?(11), %s, %d\n", destlcat, result_lcat);
	result_lcat = ft_strlcat(destlcat, " ouais", 17);
	printf(" ouais(17), %s, %d\n", destlcat, result_lcat);
	result_lcat = ft_strlcat(destlcat, " pas mal pas mal", 27);
	printf(" pas mal pas mal(27), %s, %d\n", destlcat, result_lcat);

	// ft_memset
	printf("\nft_memset :\n");
	char tab[100];
    memset(tab, 0, 100);
    ft_memset(tab, 'A', 0);
    ft_memset(tab, 'A', 42);
	printf("tab = %s\n", tab);

	// ft_bzero
	printf("\nft_bzero\n");
	char tab2[100];
    ft_bzero(tab2, 0);
    ft_bzero(tab2, 42);
	printf("tab2 = %s\n", tab2);

	// ft_memcpy
	printf("\nft_memcpy\n");
	char destcpy[100];
	memset(destcpy, 'A', 100);
	printf("dest: %s\n", destcpy);
	ft_memcpy(destcpy, "coucou", 0);
	printf("ft 0 dest: %s\n", destcpy);
	ft_memcpy(destcpy, "coucou", 3);
	printf("ft 3 dest: %s\n", destcpy);
	memset(destcpy, 'A', 100);
	printf("reset dest: %s\n", destcpy);
	memcpy(destcpy, "coucou", 3);
	printf("og 3 dest: %s\n", destcpy);

/*	// ft_memmove
	printf("\nft_memmove\n");
	char destmove[100];
	memset(destmove, 'A', 100);
	printf("dest: %s\n", destmove);
	ft_memmove(destmove, "coucou", 0);
	printf("ft 0 dest: %s\n", destmove);
	ft_memmove(destmove, "coucou", 3);
	printf("ft 3 dest: %s\n", destmove);
	memset(destmove, 'A', 100);
	printf("reset dest: %s\n", destmove);
	memcpy(destmove, "coucou", 3);
	printf("og 3 dest: %s\n", destmove);
*/
	//ft_memchr
	printf("\nft_memchr :\n");
	char *memchr = "ouais pas mal";
	printf("%s\n", memchr);
	printf("i(10) : %s\n", (char *)ft_memchr(memchr, 'i', 10));
	printf("i(3) : %s\n", (char *)ft_memchr(memchr, 'i', 3));
	printf("l(30) : %s\n", (char *)ft_memchr(memchr, 'l', 30));
	printf("l(0) : %s\n", (char *)ft_memchr(memchr, 'l', 0));
	printf("l(13) : %s\n", (char *)ft_memchr(memchr, 'l', 13));
	printf("z(20) : %s\n", (char *)ft_memchr(memchr, 'z', 20));

	// ft_strdup
	printf("\nft_strdup :\n");
	char *dup1;
	dup1 = ft_strdup("Salut bg");
	printf("dup1 apres : %s\n", dup1);
	free (dup1);
	char *dup2 = "yo";
	printf("dup2 avant : %s\n", dup2);
	dup2 = ft_strdup("Ouais pas mal");
	printf("dup2 apres : %s\n", dup2);
	free (dup2);

	// ft_strchr
	printf("\nft_strchr :\n");
	printf("'s' je suis content : %s\n", ft_strchr("je suis content", 's'));
	printf("'c' je suis content : %s\n", ft_strchr("je suis content", 'c'));
	printf("'z' je suis content : %s\n", ft_strchr("je suis content", 'z'));
	printf("'e' je suis content : %s\n", ft_strchr("je suis content", 'e'));
	printf("'9' je suis content : %s\n", ft_strchr("je suis content", '9'));

	// ft_strrchr
	printf("\nft_strrchr :\n");
	printf("'s' je suis content : %s\n", ft_strrchr("je suis content", 's'));
	printf("'c' je suis content : %s\n", ft_strrchr("je suis content", 'c'));
	printf("'z' je suis content : %s\n", ft_strrchr("je suis content", 'z'));
	printf("'e' je suis content : %s\n", ft_strrchr("je suis content", 'e'));
	printf("'9' je suis content : %s\n", ft_strrchr("je suis content", '9'));

	// ft_strnstr
	printf("\nft_strnstr\n");
	char strnstr[100] = "Comment ca va ? Ouais pas mal"; //len : 29
	printf("Ouais(30), %s\n", ft_strnstr(strnstr,"Ouais", 30));
	printf("Ouais(20), %s\n", ft_strnstr(strnstr,"Ouais", 20));
	printf("Ouais(10), %s\n", ft_strnstr(strnstr,"Ouais", 10));
	printf("Ouaiis(30), %s\n", ft_strnstr(strnstr,"Ouaiis", 30));
	printf("(30), %s\n", ft_strnstr(strnstr,"", 30));

	// ft_strncmp
	printf("\nft_strncmp :\n");
	printf("ABC ABC 3: %d\n", ft_strncmp("ABC","ABC", 3));
	printf("ABC AB 3: %d\n", ft_strncmp("ABC","AB", 3));
	printf("AB ABC 3: %d\n", ft_strncmp("AB","ABC", 3));
	printf("ABC ZBC 3: %d\n", ft_strncmp("ABC","ZBC", 3));
	printf("ABC AB 2: %d\n", ft_strncmp("ABC","AB", 2));

	// ft_memcmp
	printf("\nft_memcmp :\n");
	printf("ABC ABC 3: %d\n", ft_memcmp("ABC","ABC", 3));
	printf("ABC AB 3: %d\n", ft_memcmp("ABC","AB", 3));
	printf("AB ABC 3: %d\n", ft_memcmp("AB","ABC", 3));
	printf("ABC ZBC 3: %d\n", ft_memcmp("ABC","ZBC", 3));
	printf("ABC AB 2: %d\n", ft_memcmp("ABC","AB", 2));

	// ft_calloc
	printf("\nft_calloc :\n");
	int *stralloc;
	printf("avant p:%p s:%ld\n", &stralloc, sizeof(stralloc));
	stralloc = ft_calloc(50, sizeof(int));
	printf("apres p:%p s:%ld\n", &stralloc, sizeof(stralloc));
	free(stralloc);

	// ft_substr
	printf("\nft_substr\n");
	char *sub1 = ft_substr("Salut comment ca va bg", 6, 10);
	printf("sub1 = %s\n", sub1);
	free(sub1);
	char *sub2 = ft_substr("Salut comment ca va bg", 6, 30);
	printf("sub2 = %s\n", sub2);
	free(sub2);
	char *sub3 = ft_substr("Salut comment ca va bg", 30, 30);
	printf("sub3 = %s\n", sub3);
	free(sub3);
	char *sub4 = ft_substr("Salut comment ca va bg", 0, 0);
	printf("sub4 = %s\n", sub4);
	free(sub4);

	// ft_strjoin
	printf("\nft_strjoin :\n");
	char *join1 = ft_strjoin("Salut", " ca va");
	printf("'Salut',' ca va' : %s\n", join1);
	free(join1);
	char *join2 = ft_strjoin("Salut ", "ca va");
	printf("'Salut ','ca va' : %s\n", join2);
	free(join2);
	char *join3 = ft_strjoin("", "ca va");
	printf("'','ca va' : %s\n", join3);
	free(join3);
	char *join4 = ft_strjoin("Salut", "");
	printf("'Salut','' : %s\n", join4);
	free(join4);
	char *join5 = ft_strjoin("", "");
	printf("'','' : %s\n", join5);
	free(join5);
	
	// ft_strtrim
	printf("\nft_strtrim :\n");
	char *trim1 = ft_strtrim("Salut comment ca va", " ");
	printf("'Salut comment ca va',' ' : %s\n", trim1);
	free(trim1);
	char *trim2 = ft_strtrim("Ozuakzis kpazzs makzl", "kz");
	printf("'Ozuakzis kpazzs makzl ','kz' : %s\n", trim2);
	free(trim2);
	char *trim3 = ft_strtrim("", "ca va");
	printf("'','ca va' : %s\n", trim3);
	free(trim3);
	char *trim4 = ft_strtrim("Salut", "");
	printf("'Salut','' : %s\n", trim4);
	free(trim4);
	//char *trim5 = ft_strtrim("", "");
	//printf("'','' : %s\n", trim5);

	// ft_split
	printf("\nft_split :\n");
	char **splited1 = ft_split(NULL, 'c');
	printf("\"null\", 'c' :\n");
	for(int i = 0; splited1[i]; i++)
	{
		printf("%d : %s\n", i, splited1[i]);
		free(splited1[i]);
	}
	free(splited1);
	char **splited2 = ft_split("  bonjour   je   suisetienne  ", ' ');
	printf("\"  bonjour   je   suisetienne  \" , ' ' :\n");
	for(int i = 0; splited2[i]; i++)
	{
		printf("%d : %s\n", i, splited2[i]);
		free(splited2[i]);
	}
	free(splited2);
	char **splited3 = ft_split("ouais pas mal", 'z');
	printf("\"ouais pas mal\", 'z' :\n");
	for(int i = 0; splited3[i]; i++)
	{
		printf("%d : %s\n", i, splited3[i]);
		free(splited3[i]);
	}
	free(splited3);

	// ft_itoa
	printf("\nft_itoa :\n");
	char *itoa1 = ft_itoa(152);
	printf("152 : %s\n", itoa1);
	char *itoa2 = ft_itoa(150);
	printf("150 : %s\n", itoa2);
	char *itoa3 = ft_itoa(-152);
	printf("-152 : %s\n", itoa3);
	char *itoa4 = ft_itoa(-15470);
	printf("-15470 : %s\n", itoa4);
	char *itoa5 = ft_itoa(1505);
	printf("1505 : %s\n", itoa5);
	char *itoa6 = ft_itoa(0);
	printf("0 : %s\n", itoa6);
	char *itoa7 = ft_itoa(-0);
	printf("-0 : %s\n", itoa7);
	char *itoa8 = ft_itoa(-154700);
	printf("-154700 : %s\n", itoa8);

	// ft_strmapi
	printf("\nft_strmapi :\n");
	char *strmapi1 = "Ouais Pas Mal";
	char *strmapi2 = ft_strmapi(strmapi1, ft_revalpha);
	if (!strmapi2)
		printf("Memory allocation failed");
	printf("The initial string is : %s\n", strmapi1);
	printf("The strmapied string is : %s\n", strmapi2);
	free(strmapi2);

	// ft_striteri
	printf("\nft_striteri :\n");
	char *striteri1 = ft_strdup("Ouais Pas Mal");
	printf("The initial string is : %s\n", striteri1);
	ft_striteri(striteri1, ft_revalpha_bis);
	printf("The striteried string is : %s\n", striteri1);
	free(striteri1);

	// ft_putchar_fd
	printf("\nft_putchar_fd :\n");
	ft_putchar_fd('a', 0);
	printf("\n");
	ft_putchar_fd('a', 1);
	printf("\n");
	ft_putchar_fd('a', 2);
	printf("\n");

	// ft_putstr_fd
	printf("\nft_putstr_fd :\n");
	ft_putstr_fd("Ouais pas mal", 0);
	printf("\n");
	ft_putstr_fd("Ouais pas trop mal", 1);
	printf("\n");
	ft_putstr_fd("Ouais plutot pas mal", 2);
	printf("\n");

	// ft_putendl_fd
	printf("\nft_putendl_fd :\n");
	ft_putendl_fd("Ouais mec", 0);
	ft_putendl_fd("Comment ca va", 1);
	ft_putendl_fd("No hablo espanol", 2);
	
	// ft_putnbr_fd
	printf("\nft_putnbr_fd :\n");
	ft_putnbr_fd(42, 0);
	printf("\n");
	ft_putnbr_fd(420000, 1);
	printf("\n");
	ft_putnbr_fd(45422, 1);
	printf("\n");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	ft_putnbr_fd(0, 2);
	printf("\n");
}
