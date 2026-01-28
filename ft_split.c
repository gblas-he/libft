/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/28 19:08:28 by gblas-he         ###   ########.fr       */
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

static void *ft_free(char **str, int j)
{
    while (j >= 0)
    {
        free(str[j]);
        j--;
    }
    free(str);
    return NULL;  
}

char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int j;
    int worth;
    int start;

    worth = worth_count(s, c);
    str = ft_calloc(worth + 1, sizeof(char *));
    if(!str)
        return (NULL);
    i = 0;
    j = 0;
    start = 0;
    while(j < worth)
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] != c)
            i++;
        str[j] = ft_calloc(i - start + 1, sizeof(char *));
        if (!str[j])
        {
            ft_free(str, j); 
        }
        //printf("prueba: %d\n", start);
        j++;
    }
    return str;
}

int main (void)
{
    printf("prueba main:%s", (char *)ft_split(" Hello World W ", 32));
    return 0;
}