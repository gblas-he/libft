/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:07:07 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/02 19:15:49 by gblas-he         ###   ########.fr       */
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
	return ((t_list *)new_lst);
}
