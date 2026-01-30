/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:35:14 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/30 19:02:47 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new_node;

    if (!content)
        return NULL;
    new_node = malloc(sizeof(t_list));
    new_node-> content = content;
    new_node-> next = NULL;   
    return new_node;
}

/*int main (void)
{
    t_list *node;
    char content[] = "hola mundo";

    node = ft_lstnew(content);
    printf("%s\n", (char *)node->content);
    free(node);
    return 0;
}*/