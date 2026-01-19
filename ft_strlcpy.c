/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:06:51 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/19 17:49:16 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(void)
{
	size_t n;
	char dest [50];
    char src [] = "hola mundo";


	n = 20;
	ft_strlcpy(dest, src, n);
	printf("%s",dest);
	return (0);
}*/