/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_copia.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/28 18:24:15 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int worth_count(const char *s, char c)
{
    int i;
    int trg;
    int worth;

    i=0;
    trg = 0;
    worth = 0;
    while (s[i])
    {
        if (s[i] != c && trg == 0)
        {
            trg = 1;
            worth++;
        }
        else if (s[i] == c)
            trg = 0;
        i++;
    }
    //printf("prueba: %d\n", worth);
    return worth;
}
char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int j;
    int worth;
    int len;
    int chars = 0;

    worth = worth_count(s, c);
    str = ft_calloc(worth + 1, sizeof(char *));
    i = 0;
    j = 0;
    len = 0;
    while(j < worth)
    {
        while (s[i] && s[i] == c)
            i++;
        while (s[i + chars] != c)
            chars++;
        str[j] = ft_calloc((chars + 1), sizeof(char));
        if (!str[j])
            ft_free();
        // copia con strlcpy (&str[j], i, chars)
            // World.
            // W = i (7);
            // d = chars (13);
        i += chars;
        j++;
    }
    return str;
}

int main (void)
{
    printf("prueba main:%s", (char *)ft_split(" Hello      World     W ", 32));
    return 0;
}