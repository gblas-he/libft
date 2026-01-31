/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:13:47 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/31 15:05:43 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *current_node;
    
    if (!lst)
		return (NULL);
    current_node = lst;
    while (current_node->next)
    {
        current_node = current_node->next;
    }
    return current_node;
}

/*int main (void)
{
    t_list *lista = NULL;
    t_list *last = NULL;
    
    ft_lstadd_front(&lista, ft_lstnew("A"));
    ft_lstadd_front(&lista, ft_lstnew("B"));
    ft_lstadd_front(&lista, ft_lstnew("C"));
    last = ft_lstlast(lista);
    if (last)
        printf("%s\n", (char *) last->content);
    return 0;
}*/