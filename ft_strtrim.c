/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:34:17 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/26 21:34:14 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *str;

    start = 0;
    while(s1[start++] && ft_strchr(set, s1[start]))
    end = 0;
    while (s1[end++])
    while(end-- > start && ft_strchr(set, s1[end - 1]))
    str = ft_calloc(end - start + 1 , sizeof(char));
    if (!str)
        return (NULL);
    i = 1;
    while(start < end)
    {
        str[i++] = s1[start++];
    }
    return str;
    
}

/*int main() {
    char *str = "ztztapateros a tu apazto apatosztztz" ;
    printf("%s", ft_strtrim(str, "t"));
    return 0;
}*/