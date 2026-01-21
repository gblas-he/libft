/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:23:24 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:39:21 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia n bytes de memoria de una zona a otra (no permite solapamiento)
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    i = 0;
    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}