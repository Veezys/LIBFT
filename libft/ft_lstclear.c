/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breadyma <breadyma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:49:21 by breadyma          #+#    #+#             */
/*   Updated: 2021/10/12 14:35:19 by breadyma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!*lst || !del)
		return ;
	while ((*lst))
	{
		del((*lst)->content);
		new = *lst;
		*lst = new->next;
		free(new);
	}
	*lst = NULL;
}
