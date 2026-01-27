/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_copia.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/27 17:12:42 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int worth_count(const char *s, char c)
{
    int i;
    int is_word;
    int words;
    i = 0;
    words = 0;
    while (s[i] != '\0')
    {
        is_word = 0;
        while (s[i] != c && s[i] != '\0')
        {
            if (!is_word)
            {
                is_word = 1;
                words++;
            }
        }
        i++;
    }
    printf("prueba: %d\n", words);
    return words;
}

char    *fill_word(const char *s, int len)
{

}

char **ft_split(char const *s, char c)
{
    char **arr;
    char *string;
    int i;
    int j;
    int len;
    int words;

    j = 0;
    words = worth_count(s, c);
    arr = ft_calloc( + 1, sizeof(char *));
    i = 0;
    while(i < words)
    {
        len = 0;
        while (s[j] != '\0')
        {
            while (s[j] != c)
            {
                len++;
                j++;
            }   
            arr[i] = ft_calloc(len + 1, sizeof(char *));
            
        }
        printf("prueba: %d\n", len);
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
    printf("prueba main:%s", (char *)ft_split(" He llo Wor       ld W das        ", 32));
    return 0;
}