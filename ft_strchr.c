/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:42:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/02 19:20:56 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca la última aparición de un carácter en una cadena
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
