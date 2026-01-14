/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:35:02 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/14 19:17:18 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n)
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
    int str[5];
    int *ptr;

    ptr = &str[2];
    int i = 0;
    while (i < 5)
    {
        printf("%d ", str[i]);
        i++;
    }
    printf("\n");
    ft_bzero(ptr, 6);
    while (i < 5)
    {
        printf("%d", str[i]);
        i++;
    }
    printf("\n");
	return (0);
}*/