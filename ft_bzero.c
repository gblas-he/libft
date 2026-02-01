/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:35:02 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 17:22:01 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Pone a cero un bloque de memoria
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *) s;
	i = 0;
	while (i < n)
		d[i++] = 0;
}
