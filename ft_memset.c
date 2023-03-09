/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:07:25 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 16:38:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	char_c;

	i = 0;
	char_c = (char) c;
	if (b == (void *) 0)
		return ((void *) 0);
	while (i < len)
	{
		((unsigned char *) b)[i] = char_c;
		++i;
	}
	return (b);
}
