/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:19:17 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/31 15:36:16 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current_node;
    
    if (!new || !lst)
	    return;
    if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
    current_node = *lst;
    while (current_node->next)
        current_node = current_node->next;
    current_node->next = new;
}

/*int main() {
    t_list *list = NULL;
    t_list *temp;
    int a = 1, b = 2, c = 3;
    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(&b);
    t_list *node3 = ft_lstnew(&c);


    // Añadir nodos al frente
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Imprimir la lista
    temp = list;
    while (temp)
    {
        printf("%d", *((int *)temp->content));
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Liberar memoria
    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }

    return 0;
}*/