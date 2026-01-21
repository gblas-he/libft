/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:06:51 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:32:09 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia una cadena asegurando la terminación en '\0'
size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t    i;

	i = 0;
    if(size > 0)
    {
        while (src[i] != '\0' && i < size-1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i] != '\0') {
        i++;
    }
	return (i);  
}