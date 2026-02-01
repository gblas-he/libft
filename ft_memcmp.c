/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:22:42 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 19:48:04 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compara n bytes de dos bloques de memoria
int	ft_memcmp(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

/*int	main(void)
{
	int	b;
	const char	s1[] = "hola";
	char	s2[] = "holaa";

	b = ft_memcmp(s1, s2, 3);
	printf("%d", b);
	return (0);
}*/
