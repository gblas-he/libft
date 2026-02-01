/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:05:54 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 19:51:45 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Une s1 y s2 en una nueva cadena */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = +ft_strlen(s2);
	str = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[len1] = s2[i];
		len1++;
		i++;
	}
	str[len1] = '\0';
	return (str);
}

/*int main (void)
{
	printf("%s", ft_strjoin("Hellohello", "World"));
	return (0);
}*/