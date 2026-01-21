/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:54:51 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:51:31 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	main_isalpha(void)
{
    int a = 'c';
    printf("%d\n", ft_isalpha(a));
}

void	main_isdigit(void)
{
    
}

void	main_isalnum(void)
{
    
}

void	main_isascii(void)
{
    
}

void	main_isprint(void)
{
    
}

void	main_strlen(void)
{
    
}

void	main_memset(void)
{
    char str[] = "Hello world";
	char *c;
    c = ft_memset(str, 'a',  5);
    printf("%s", c);
	return (0);
}

void	main_bzero(void)
{
    char str[] = "Helloworld";
    
    printf("%s\n", str);
    ft_bzero(str+2, 4);
    printf("%s\n", str);
    bzero(str+2, 4);
    printf("%s\n", str);
}

void   main_memcpy(void)
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

void   main_memmove(void)
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

void	main_strlcpy(void)
{
	size_t n;
	char dest [50];
    char src [] = "hola mundo";


	n = 20;
	ft_strlcpy(dest, src, n);
	printf("%s",dest);
}

void	main_strlcat(void)
{
	char dest [] = "hola Mundo";
	char src [] = "welcome";
	size_t size = 12;

	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%zu", strlcat(dest, src, size));
	printf("%s", dest);
}

void	main_toupper(void)
{
    int a = 'c';
    printf("%c\n", ft_toupper(a));
}

void	main_tolower(void)
{
    int a = 'C';
    printf("%c\n", ft_tolower(a));
}

void main_strchr() {
    char *str = "apateros a tu apazto apatos" ;
    printf("%s", ft_strchr(str, 'z'));
}

void main_strrchr() {
    char *str = "apateros a tu apato apatos" ;
    printf("%s", ft_strrchr(str, 'z'));
}

void	main_strncmp(void)
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


void main_memchr(void) {
    char *str = "apateros a tu apazto apatos" ;
    printf("%s", (char *)ft_memchr(str, 'z', 19));
    return 0;
}

void	main_memcmp(void)
{
	int	b;
	const char	s1[] = "hola";
	char	s2[] = "holaa";

	b = ft_memcmp(s1, s2, 3);
	printf("%d", b);
}

void	main_strnstr(void)
{
	char str[] = "hola que tal";
	char to_find [] = "el";
	printf("%s\n", ft_strnstr(str, to_find, 10));
	printf("%s", strnstr(str, to_find, 10));
}

void    main_atoi(void)
{
    char *a = "   -12345";
    int b;

    b = ft_atoi(a);
    printf("%d\n", b);
    b = atoi(a);
    printf("%d\n", b);
}


int	main(void)
{
    main_atoi();
    printf("\n");
    return (0);
}