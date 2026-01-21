/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:55:08 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:41:16 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// Rellena un bloque de memoria con un valor específico
void    *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;

    unsigned char *d;

    d = (unsigned char *) s;
     while (i < n)
     {
        d[i] = (unsigned char) c;
        i++;
     }
    return (s);
}