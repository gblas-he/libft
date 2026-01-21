/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:20:36 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:18:07 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Comprueba si el carácter pertenece a la tabla ASCII (0–127)
 int    ft_isascii(int c)
 {
    if (0 <= c && 127 >= c)
        return (1);
	return (0);
 }