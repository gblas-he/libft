/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/27 17:12:02 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int worth_count(char *s, char c)
{
    int i;
    int length;

    i = 0;
    length = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            length++;
            i++;
        }
        else
            i++;
    }
    printf("prueba: %d\n", length);
    return length;
}
char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int len;

    str = ft_calloc(worth_count((char *)s, c) + 1, sizeof(char));
    i = 0;
    while(str[i])
    {
        len = ft_strlen(s);
        //printf("prueba: %zu\n", len);
        // if(str[i] != c)
        // {
        //     str[i] = 
        // }
        i++;
    }
    return str;
}

int main (void)
{
    printf("prueba main:%s", (char *)ft_split(" Hello World W ", 32));
    return 0;
}