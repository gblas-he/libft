/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:57:48 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/31 19:05:44 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
    t_list *lista = NULL;
    t_list *temp;

    // Añadir nodos al frente
    ft_lstadd_front(&lista, ft_lstnew("A"));
    ft_lstadd_front(&lista, ft_lstnew("B"));
    ft_lstadd_front(&lista, ft_lstnew("C"));

    // Imprimir la lista
    temp = lista;
    while (temp)
    {
        printf("%s", (char *)temp->content);
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Liberar memoria
    while (lista)
    {
        temp = lista->next;
        free(lista);
        lista = temp;
    }

    return 0;
}*/
