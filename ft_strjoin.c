/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:05:54 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/22 20:15:18 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t len;
    
    len = ft_strlen(s1) + ft_strlen(s2)  + 1;
    str = ft_calloc(ft_strlen(s1) + ft_strlen(s2)  + 1 , sizeof(char));

    str = ft_strlcpy(str, s1, len);
    str = ft_strlcat(str, s2,len);
	str[len] = '\0';
	return (s1);
}