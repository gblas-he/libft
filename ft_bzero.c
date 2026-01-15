/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:35:02 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/15 18:23:16 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(void)
{
    char str[] = "Helloworld";
    
    printf("%s\n", str);
    ft_bzero(str+2, 4);
    printf("%s\n", str);
    bzero(str+2, 4);
    printf("%s\n", str);
	return (0);
}*/