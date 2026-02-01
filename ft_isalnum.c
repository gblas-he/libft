/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:50:06 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 17:28:44 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Comprueba si el carácter es alfanumérico (letra o número)
int	ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	return (0);
}
