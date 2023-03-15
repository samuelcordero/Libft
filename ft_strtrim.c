/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:09:04 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/15 17:03:03 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
#include <unistd.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}
static char	*ft_malloc_len(size_t len, char const *s, unsigned int start)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return ((char *) malloc(sizeof(char)));
	else if (slen - start < len)
		return ((char *) malloc(sizeof(char) * (slen - start + 1)));
	else if (slen - start >= len)
		return ((char *) malloc(sizeof(char) * (len + 1)));
	else
		return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	pos_res;
	size_t	pos_s;

	pos_s = 0;
	pos_res = 0;
	res = ft_malloc_len(len, s, start);
	if (!res || !s)
		return (res);
	if (len > 0)
	{
		while (s[pos_s] != '\0' && pos_res < len)
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

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		++i;
	}
}*/

static unsigned int	ft_isset(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		++i;
	}
	return (0);
}

static size_t	ft_startpos(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_isset(s[i], set) && s[i] != '\0')
		++i;
	return (i);
}

static size_t	ft_endpos(char const *s, char const *set)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (ft_isset(s[i], set) && i >= 0)
		--i;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;

	if (!s1)
	{
		res = (char *) malloc(sizeof(char) * 1);
		res[0] = '\0';
		return (res);
	}
	else if (ft_startpos(s1, set) >= ft_endpos(s1, set))
	{
		res = (char *) malloc(sizeof(char) * 1);
		res[0] = '\0';
		return (res);
	}
	else
		res = (char *) malloc(sizeof(char) * (ft_endpos(s1, set) - ft_startpos(s1, set)));
	if (!res)
		return (res);
	res = ft_substr(s1, (unsigned int) ft_startpos(s1, set), ft_endpos(s1, set) - ft_startpos(s1, set) + 1);
	return (res);
}
/*
int	main(int argc, char **argv)
{
	char *res;
	res = ft_strtrim(argv[1], argv[2]);
	if (res)
		ft_putstr_fd(res, 1);
	write(1, "\n", 1);
	return (0);
}*/
