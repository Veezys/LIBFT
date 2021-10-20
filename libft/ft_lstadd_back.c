/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breadyma <breadyma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:47:08 by breadyma          #+#    #+#             */
/*   Updated: 2021/10/11 15:57:33 by breadyma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*lastlist;

	lastlist = ft_lstlast(*lst);
	if (*lst == NULL)
		*lst = new;
	else
		lastlist->next = new;
}
