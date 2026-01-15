/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:03:16 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/15 20:09:02 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
       size_t i = 0;

       unsigned char *s;
       unsigned char *d;

       s = (unsigned char *) src;
       d = (unsigned char *) dest;
       while (i < n)
       {
        d[i-1] = (unsigned char) s[i-1];
        i--;
       }
           return (dest);
}

int   main(void)
{
	char origen[] = "abc";
	char destino[] = "Hola que tal";
    char origen2[] = "abc";
    char destino2[] = "Hola";

	ft_memmove(destino, origen, 4);
	printf("Destino:%s\n", destino);
    memmove(destino2, origen2, 4);
    printf("%s", destino2);
	return(0);
}