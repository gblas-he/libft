/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:45:36 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:31:35 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve el número de nodos en la lista
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current_node;

	if (!lst)
		return (0);
	current_node = lst;
	count = 0;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	return (count);
}