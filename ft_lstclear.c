/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:33:24 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/14 15:59:43 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmplst;

	if (lst)
	{
		while (*lst)
		{
			tmplst = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmplst;
		}
	}
}
