/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:20:50 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/14 15:58:48 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmplst;

	if (lst)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			tmplst = ft_lstlast(*lst);
			tmplst->next = new;
		}
	}
}
