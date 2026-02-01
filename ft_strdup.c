/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:11:26 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 19:51:34 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// Duplica la cadena `s` reservando memoria y devuelve la nueva copia.
char	*ft_strdup(const char *s)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = ft_calloc((ft_strlen(s) + 1), (sizeof(char)));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int main(void)
{
	printf("%s", ft_strdup("hola"));
	printf("%s\n", strdup("holo"));
	return (0);
}*/