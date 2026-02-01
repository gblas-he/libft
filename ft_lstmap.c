/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:07:07 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 20:06:07 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	**new_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = ft_calloc(1, sizeof(t_list *));
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(new_lst, del);
			free(new_lst);
			return (NULL);
		}
		ft_lstadd_back(new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
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
