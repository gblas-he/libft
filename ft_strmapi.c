/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:22:38 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/24 19:06:14 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char to_upper_even(unsigned int i, char c)
{
    (void) i;
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}*/

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    char *str;
    unsigned int i;

	if (!(str = ft_calloc(ft_strlen(s) + 1, sizeof(char))))
		return NULL;
    i = 0;
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
	str[i] = '\0';
    return str;
}

/*int main(void)
{
    char s[] = "hello";
	char *res = ft_strmapi(s, to_upper_even);
    printf("%s\n", res);
    free(res);
	return (0);
}*/