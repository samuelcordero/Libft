/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:07:28 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/10 15:50:36 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_malloc_lenchars(size_t len)
{
	char *res;

	res = 0;
	if (len > 0 && len <= 0x10000000000)
		res = (char *) malloc(sizeof(char) * (len));
	else if (len == 0)
		res = (char *) malloc(sizeof(char) * 1);
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	pos_res;
	size_t	pos_s;

	pos_s = 0;
	pos_res = 0;
	res = ft_malloc_lenchars(len);
	if (!res || !s)
		return (res);
	if (len > 0)
	{
		while (s[pos_s] != '\0' && pos_res < len - 1)
		{
			if (pos_s >= start)
			{
				res[pos_res] = s[pos_s];
				++pos_res;
			}
			++pos_s;
		}
	}
	res[pos_res] = '\0';
	return (res);
}
