/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/26 21:20:10 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    int len;
    (void) c;
    char ** cc = NULL;

    len = ft_strlen(s);
    printf("%d", len);
    return(cc);
}

int main (void)
{
    printf("%p", ft_split("Hello World", 32));
    return 0;
}