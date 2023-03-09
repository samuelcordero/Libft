/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:36:14 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 16:36:13 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s)[i] != '\0' && i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return (&((unsigned char *)s)[i]);
		++i;
	}
	return ((void *) 0);
}
