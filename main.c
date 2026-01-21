/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:54:51 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 19:14:13 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_isalpha(void)
{
    int a = 'c';
    printf("%d\n", ft_isalpha(a));
}

void	test_isdigit(void)
{
    
}

void	test_isalnum(void)
{
    
}

void	test_isascii(void)
{
    
}

void	test_isprint(void)
{
    
}

void	test_strlen(void)
{
    
}

void	test_memset(void)
{
    char str[] = "Hello world";
	char *c;
    c = ft_memset(str, 'a',  5);
    printf("%s", c);
}

void	test_bzero(void)
{
    char str[] = "Helloworld";
    
    printf("%s\n", str);
    ft_bzero(str+2, 4);
    printf("%s\n", str);
    bzero(str+2, 4);
    printf("%s\n", str);
}

void   test_memcpy(void)
{
	char str1[] = "abcde";
	char str2[] = "Hola";

	ft_memcpy(str1+1, str1, 3);
	printf("ft:%s\n", str1);
    memcpy(str1+1, str1, 3);
    printf("%s\n", str1);
    ft_memcpy(str1, str2, 3);
    printf("ft:%s\n", str1);
    memcpy(str1, str2, 3);
    printf("%s\n", str1);
}

void   test_memmove(void)
{
	char str1[] = "abcde";
	char str2[] = "Hola";

	ft_memmove(str1+2, str1, 3);
	printf("ft:%s\n", str1);
    memmove(str1+2, str1, 4);
    printf("%s\n", str1);
    ft_memmove(str1, str2, 3);
    printf("ft:%s\n", str1);
    memmove(str1, str2, 3);
    printf("%s\n", str1);
}

void	test_strlcpy(void)
{
	size_t n;
	char dest [50];
    char src [] = "hola mundo";


	n = 20;
	ft_strlcpy(dest, src, n);
	printf("%s",dest);
}

void	test_strlcat(void)
{
	char dest [] = "hola Mundo";
	char src [] = "welcome";
	size_t size = 12;

	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%zu", strlcat(dest, src, size));
	printf("%s", dest);
}

void	test_toupper(void)
{
    int a = 'c';
    printf("%c\n", ft_toupper(a));
}

void	test_tolower(void)
{
    int a = 'C';
    printf("%c\n", ft_tolower(a));
}

void test_strchr(void) {
    char *str = "apateros a tu apazto apatos" ;
    printf("%s", ft_strchr(str, 'z'));
}

void test_strrchr(void) {
    char *str = "apateros a tu apato apatos" ;
    printf("%s", ft_strrchr(str, 'z'));
}

void	test_strncmp(void)
{
	int	a;
	int	b;
	char	s1[] = "holaj";
	char	s2[] = "holaq";

	a = ft_strncmp(s1, s2, 5);
	b = strncmp(s1, s2, 5);
	printf("%d\n", a);
	printf("%d\n", b);
}


void test_memchr(void) {
    char *str = "apateros a tu apazto apatos" ;
    printf("%s", (char *)ft_memchr(str, 'z', 19));
}

void	test_memcmp(void)
{
	int	b;
	const char	s1[] = "hola";
	char	s2[] = "holaa";

	b = ft_memcmp(s1, s2, 3);
	printf("%d", b);
}

void	test_strnstr(void)
{
	char str[] = "hola que tal";
	char to_find [] = "el";
	printf("%s\n", ft_strnstr(str, to_find, 10));
	printf("%s", strnstr(str, to_find, 10));
}

void    test_atoi(void)
{
    char *a = "   -12345";
    int b;

    b = ft_atoi(a);
    printf("%d\n", b);
    b = atoi(a);
    printf("%d\n", b);
}

void    test_calloc(void)
{
    char *a;

    a = ft_calloc(3, 5);
    printf("%s\n", a);
    a = calloc(3, 5);
    printf("%s\n", a);
}


int	main(void)
{
    test_calloc();
    printf("\n");
    return (0);
}