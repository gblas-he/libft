/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:28:12 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/26 21:16:09 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca un byte específico en un bloque de memoria
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *) s;
    while (i < n)
    {
        if (str[i] == c) 
            return (void *)&str[i];
        i++;
    }
        
    return (NULL);
}

int main() {
    char *str = "apateros a tu apazto apatos" ;
    printf("%s", (char *)ft_memchr(str, 'z', 19));
    return 0;
}