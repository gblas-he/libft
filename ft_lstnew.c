/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:35:14 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:31:29 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Crea un nuevo nodo con un contenido dado
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	if (!content)
		return (NULL);
	new_node = malloc(sizeof(t_list));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
