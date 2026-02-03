/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:34:17 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:33:29 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Elimina caracteres específicos al inicio y final de la cadena
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = ft_calloc(end - start + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	return (str);
}