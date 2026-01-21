/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:38:53 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:27:39 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve la longitud de una cadena (sin contar el '\0')
size_t  ft_strlen(const char *s)
{
    size_t	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}