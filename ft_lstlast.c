/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:17:06 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/14 16:00:22 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmplst;

	tmplst = lst;
	while (tmplst->next)
		tmplst = tmplst->next;
	return (tmplst);
}
