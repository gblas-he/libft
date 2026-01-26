/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:34:17 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/26 21:15:55 by gblas-he         ###   ########.fr       */
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
    while(s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = 0;
    end = ft_strlen(s1);
    while(end > start && ft_strchr(set, s1[end -1]))
    end--;
    str = ft_calloc(end - start + 1 , sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while(start < end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    return str;
    
}

/*int main() {
    char *str = "ztztapateros a tu apazto apatosztzt" ;
    printf("%s", ft_strtrim(str, "zt"));
    return 0;
}*/