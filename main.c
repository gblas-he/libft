/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:54:51 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/20 20:23:53 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    main_atoi(void)
{
    char *a = "   -12345";
    int b;

    b = ft_atoi(a);
    printf("%d\n", b);
    b = atoi(a);
    printf("%d\n", b);
}

void	main_strlcat(void)
{
	char dest [] = "hola Mundo";
	char src [] = "welcome";
	size_t size = 12;

	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%zu", strlcat(dest, src, size));
	printf("%s", dest);
}

int	main(void)
{
    main_atoi();
    printf("\n");
    main_strlcat();
    return (0);
}