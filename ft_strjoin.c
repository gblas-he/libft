/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:05:54 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/22 19:31:03 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    
    str = ft_calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char) + 1);
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[j])
		j++;
	while (s2[i])
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[j + i] = '\0';
	return (s1);
}