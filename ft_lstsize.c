/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:14:00 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/14 16:00:56 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmplst;

	size = 0;
	tmplst = lst;
	while (tmplst)
	{
		tmplst = tmplst->next;
		++size;
	}
	return (size);
}
