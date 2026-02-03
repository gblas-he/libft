/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:39:35 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 16:24:49 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca la última aparición de un carácter en una cadena
char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*res;
	unsigned char	cc;

	i = 0;
	res = NULL;
	cc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *)&s[i];
		i++;
	}
	if (cc == 0)
		return ((char *)&s[i]);
	return (res);
}
