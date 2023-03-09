/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:31:21 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 14:59:33 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((const char *) src >= (const char *) dst)
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			++i;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			dst[i] = src[i];
			--i;
		}
	}
}
