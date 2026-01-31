/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:32:37 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/31 17:40:06 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst)
{
    t_list *current_node;
    
    if (!lst)
	    return;
    current_node = *lst;
    while (current_node)
    {
        printf("%s", (char *)current_node->content);
        current_node = current_node->next;
    }
}

int main()
{
    t_list *list = NULL;
    t_list *temp;

    // Añadir nodos al frente
    ft_lstadd_back(&list, ft_lstnew("A"));
    ft_lstadd_back(&list, ft_lstnew("B"));
    ft_lstadd_back(&list, ft_lstnew("C"));

    // Imprimir la lista
    ft_lstclear(&list);
    /*temp = list;
    while (temp)
    {
        printf("%s", (char *)temp->content);
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");*/

    // Liberar memoria
    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }

    return 0;
}