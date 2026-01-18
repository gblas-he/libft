/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:23:24 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/18 17:47:23 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
       size_t i = 0;

       unsigned char *s;
       unsigned char *d;

       s = (unsigned char *) src;
       d = (unsigned char *) dest;
       while (i < n)
       {
        d[i] = s[i];
        i++;
       }
           return (dest);
}

/*int   main(void)
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
	return(0);
}*/