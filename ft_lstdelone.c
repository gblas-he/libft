/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:37:46 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:30:46 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Elimina y libera un nodo específico
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}
