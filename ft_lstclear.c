/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:32:37 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 18:20:25 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = tmp;
	}
}

/*int main()
{
    t_list *list = NULL;
    t_list *temp;

    // Añadir nodos al frente
    ft_lstadd_back(&list, ft_lstnew("A"));
    ft_lstadd_back(&list, ft_lstnew("B"));
    ft_lstadd_back(&list, ft_lstnew("C"));

    // Imprimir la lista
    temp = list;
    while (temp)
    {
        printf("%s", (char *)temp->content);
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
