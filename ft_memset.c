/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:07:25 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 15:00:39 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b == (void *) 0)
		return ((void *) 0);
	while (i < len)
	{
		b[i] = (unsigned char) c;
		++i;
	}
	return (b);
}
