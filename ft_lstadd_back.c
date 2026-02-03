/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:19:17 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:30:23 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Agrega un nuevo nodo al final de una lista enlazada.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_node;

	if (!new || !lst)
		return ;
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

