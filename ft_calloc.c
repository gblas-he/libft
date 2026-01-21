/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:12:34 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 19:24:02 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *tmp;
    size_t i;

    i = 0;
    if (size != 0 && nmemb > SIZE_MAX  / size)
        return NULL;
    tmp = malloc (size * nmemb);
    if (!tmp)
        return NULL;
    while (i < size * nmemb)
    {
        tmp[i] = 0;
        i++;
    }
    return (tmp);
}

/*int    main(void)
{
    char *a;
    char *b;
    size_t i = 0;
    size_t j = 0;

    size_t n = 2, s = 3;

    a = ft_calloc(n, s);
    while (i < n*s)
    {
        printf("%d", a[i]);
        i++;
    }
    printf("\ncalloc:");
    b = calloc(n, s);
    while (j < n*s)
    {
        printf("%d", b[j]);
        j++;
    }
    free(a);
    free(b);
    return 0;
}*/