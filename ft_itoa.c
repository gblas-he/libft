/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:31:04 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/26 21:16:11 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Devuelve el número de dígitos de un entero n */
int ft_digits (long int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

/* Convierte un entero n a una cadena */
char *ft_itoa(int n)
{
    char *str;
	long int	num;
	int len;

	num = n;
	len = ft_digits(num);
	if (!(str = (char *)ft_calloc(len + 1, sizeof(char))))
		return NULL;
	if (num == 0)
	{
		str[0] = '0';
	}
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return str;
}

/*int main (void)
{
	printf("%s", ft_itoa(0));
	return 0;
}*/