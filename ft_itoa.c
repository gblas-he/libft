/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:31:04 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/24 17:18:33 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_digits (long int n)
{
	int i;

	i = 0;
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

char *ft_itoa(int n)
{
    char *str;
	long int	num;
	int digits;
	int i;

		i = 0;
	num = n;
	digits = ft_digits(num);
	if (!(str = (char *)ft_calloc(digits + 1, sizeof(char))))
		return NULL;
	// if (!(str = malloc(i * sizeof(char) + 1)))
	// 	return (0);
	//printf("%s\t %ld", str, num);

	if (n == 0)
	{
		str[i] = 48;
	}
	//printf("%d\t %s\t", i, str);
	if (n < 0)
	{
		str[i] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[i--] = num % 10 + '0';
		num /= 10;
	}
	str[i] = '\0';
	return str;
}

int main (void)
{
	printf("%s", ft_itoa(-1345));
	return 0;
}