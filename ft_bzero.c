/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:35:02 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:39:51 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Pone a cero un bloque de memoria
void    ft_bzero(void *s, size_t n)
{
    size_t i = 0;

    unsigned char *d;

    d = (unsigned char *) s;
     while (i < n)
     {
        d[i] = 0;
        i++;
     }
}