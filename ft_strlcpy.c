/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:06:51 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 15:39:15 by gblas-he         ###   ########.fr       */
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
        while (src[i] && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i]) {
        i++;
    }
	return (i);  
}

/*int main(void)
{
    size_t n;
	char dest [5];
    char src [] = "hola mundo";


	n = 2;
	ft_strlcpy(dest, src, n);
	printf("%s\n",dest);
    strlcpy(dest, src, n);
	printf("%s",dest);
    return 0;
}*/