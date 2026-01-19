/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:42:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/19 18:36:58 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '0' && s[i] != c)
    {
        i++;
    }
    
    if (s[i] == c) 
        return (char*)&s[i];
        
    return (NULL);
}

int main() {
    char *str = "apateros a tu apazto apatos" ;
    printf("%s", ft_strchr(str, 'z'));
    return 0;
}
