/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:34:59 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/16 15:15:05 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmplst;

	tmplst = lst;
	while (tmplst)
	{
		(*f)(tmplst->content);
		tmplst = tmplst->next;
	}
}
