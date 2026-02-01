/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:39:35 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 20:26:47 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca la primera aparición de un carácter en una cadena
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*res;

	i = 0;
	res = NULL;
	while (s[i] != '0')
	{
		if (s[i] == c)
			res = (char *)&s[i];
		i++;
	}
	return (res);
}
