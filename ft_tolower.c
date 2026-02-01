/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:25:34 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 20:28:19 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convierte una letra mayúscula a minúscula
int	ft_tolower(int c)
{
	if (65 <= c && 90 >= c)
		return (c + 32);
	return (c);
}
