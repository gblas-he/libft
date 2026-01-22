/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:51:27 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/22 18:35:21 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s2;
    size_t i;
    size_t len_s;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_srtlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    s2 = ft_calloc(len + 1, (sizeof(char)));
    if (!s2)
        return (NULL);
    while (i < len)
    {
        s2[i] = s[start + 1];
        i++;
    }
    return (s2);
}