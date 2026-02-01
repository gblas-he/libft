/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:19:58 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 19:51:40 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void to_upper_even(unsigned int i, char *c)
{
	unsigned int	i;

	(void)i; // no usamos el índice
	if (*c >= 'a' && *c <= 'z')
		*c = *c - ('a' - 'A');
}*/
/* Aplica f a cada carácter de s */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
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