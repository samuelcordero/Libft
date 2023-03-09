/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:07:28 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 14:45:39 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	pos_res;
	size_t	pos_s;

	pos_s = 0;
	pos_res = 0;
	res = (void *) 0;
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res || !s)
		return (res);
	while (s[pos_s] != '\0' && pos_res < len)
	{
		if (pos_s >= start)
		{
			res[pos_res] = s[pos_s];
			++pos_res;
		}
		++pos_s;
	}
	res[pos_res] = '\0';
	return (res);
}
