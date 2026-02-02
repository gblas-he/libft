/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:51:27 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/02 19:36:34 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Crea una subcadena de `s` desde `start` con longitud máxima `len`,
//reservando memoria.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i++] = s[start + 1];
	}
	return (s2);
}