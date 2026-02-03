/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:13:47 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:31:10 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve el último nodo de la lista
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	if (!lst)
		return (NULL);
	current_node = lst;
	while (current_node->next)
		current_node = current_node->next;
	return (current_node);
}
