/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:28:54 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/07 16:49:42 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == (void *) 0)
		return (0);
	while (str[i] != '\0')
		++i;
	return ((size_t) i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*res;
	int		pos;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *) malloc(sizeof(char) * (s1len + s2len));
	if (res == (void *) 0)
		return (res);
	pos = 0;
	while (pos < s1len)
	{
		res[pos] = s1[pos];
		++pos;
	}
	pos = 0;
	while (pos <= s2len)
	{
		res[pos + s1len] = s2[pos];
		++pos;
	}
	return (res);
}
