/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:23:24 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/15 18:23:32 by gblas-he         ###   ########.fr       */
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
        d[i] = (unsigned char) s[i];
        i++;
       }
           return (dest);
}

/*int   main(void)
{
	char origen[] = "abc";
	char destino[] = "Hola";
    char origen2[] = "abc";
    char destino2[] = "Hola";

	ft_memcpy(destino, origen, 3);
	printf("Destino:%s\n", destino);
    memcpy(destino2, origen2, 3);
    printf("%s", destino2);
	return(0);
}*/