/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:18:47 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/19 19:26:16 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	a;
	int	b;
	char	s1[] = "holaj";
	char	s2[] = "holaq";

	a = ft_strncmp(s1, s2, 5);
	b = strncmp(s1, s2, 5);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/
