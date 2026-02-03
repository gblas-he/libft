/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:39:35 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 12:38:03 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca la última aparición de un carácter en una cadena
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*res;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == c)
			res = (char *)&s[i];
		i++;
	}
	if (c == 0)
		return ((char *) &s[i]);
	return (res);
}
