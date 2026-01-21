/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:26:26 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:27:37 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Comprueba si el carácter es imprimible (incluye el espacio)
 int    ft_isprint(int c)
 {
    if (32 <= c && 126 >= c)
        return (1);
	return (0);
 }