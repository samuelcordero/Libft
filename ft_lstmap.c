/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:36:01 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/14 16:00:35 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmplst;
	t_list	*new_entry;
	t_list	*result_start;

	tmplst = lst;
	if (tmplst)
	{
		if (!(result_start = ft_lstnew(f(tmplst->context))))
			return (0);
		tmplst = tmplst->next;
		while (tmplst)
		{
			if (!(new_entry = ft_lstnew(f(tmplst->context))))
			{
				ft_lstclear(&result_start, del);
				return (0);
			}
			ft_lstadd_back(&result_start, new_entry);
			tmplst = tmplst->next;
		}
		return (result_start);
	}
	return (0);
}
