/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:09:04 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 14:46:21 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_set_str(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
			{
				count++;
				break ;
			}
			++j;
		}
		++i;
	}
	return (count);
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == (void *) 0)
		return (0);
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	*res;

	res = (char *) malloc(ft_strlen(s1) - count_set_str(s1, set));
	count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				break ;
			++j;
		}
		if (set[j] != '\0')
			res[i - count] = s1[i];
		else
			++count;
		++i;
	}
	return (res);
}
