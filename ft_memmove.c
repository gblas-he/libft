/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:03:16 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/18 18:18:25 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
       size_t i;
       unsigned char *s;
       unsigned char *d;

       s = (unsigned char *) src;
       d = (unsigned char *) dest;
       i = 0;

       if (d > s)
       {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
       } else
       {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
       }
       return (dest);
}

/*int   main(void)
{
	char str1[] = "abcde";
	//char str2[] = "Hola";

	ft_memmove(str1+2, str1, 3);
	printf("ft:%s\n", str1);
    /*memmove(str1+2, str1, 4);
    printf("%s\n", str1);
    ft_memmove(str1, str2, 3);
    printf("ft:%s\n", str1);
    memmove(str1, str2, 3);
    printf("%s\n", str1);
	return(0);
}*/