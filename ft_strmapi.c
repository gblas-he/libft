/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:22:38 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 20:24:30 by gblas-he         ###   ########.fr       */
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

/* Aplica f a cada carácter de s y devuelve una nueva cadena */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
		str[i++] = (*f)(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
    char s[] = "hello";
	char *res = ft_strmapi(s, to_upper_even);
    printf("%s\n", res);
    free(res);
	return (0);
}*/
