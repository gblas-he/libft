/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:31:32 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/02 19:33:09 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Concatena cadenas asegurando la terminación en '\0'
size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src[src_len])
	{
		src_len++;
	}
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}