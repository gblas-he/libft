/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:45:36 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/30 19:09:05 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    t_list *current_node;
    
    if (!lst)
		return 0;
    current_node = lst;
    count = 0;
    while (current_node != NULL)
    {
        current_node = current_node->next;
        count++;
    }

    return count;
}

/*int main (void)
{
    t_list *lista = NULL;
    int count = 0;
    
    ft_lstadd_front(&lista, ft_lstnew("A"));
    ft_lstadd_front(&lista, ft_lstnew("B"));
    ft_lstadd_front(&lista, ft_lstnew("C"));
    count = ft_lstsize(lista);
    printf("%d" , count);
    return 0;
}*/