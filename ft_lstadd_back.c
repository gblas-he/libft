/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:19:17 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/30 20:04:22 by gblas-he         ###   ########.fr       */
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

    // Crear algunos nodos
    int a = 1, b = 2, c = 3;
    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(&b);
    t_list *node3 = ft_lstnew(&c);

    // Agregar nodos a la lista
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Imprimir la lista
    print_list(list);

    // Liberar memoria
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/