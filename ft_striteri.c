/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:19:58 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/24 19:55:40 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void to_upper_even(unsigned int i, char *c)
{
    (void)i; // no usamos el índice
    if (*c >= 'a' && *c <= 'z')
        *c = *c - ('a' - 'A');
}*/

void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
    s[i] = '\0';
}

/*int main(void)
{
    char s[] = "hello";
	ft_striteri(s, to_upper_even);
    printf("%s\n", s);
	return (0);
}*/