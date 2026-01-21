/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:09:04 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/21 16:27:26 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convierte una cadena de texto en un número entero
int ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (nptr[i] != '\0' && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
        if (nptr[i] == '+' || nptr[i] == '-')
            return(0);
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

/*int	main(void)
{
    char *a = "   -12345";
    int b;

	b = ft_atoi(a);
    printf("%d\n", b);
	b = atoi(a);
    printf("%d\n", b);
	return (0);
}*/