/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:07:28 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/07 16:28:29 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (void *) 0;
	res = (char *) malloc(len);
	if (res == (void *) 0)
		return (res);
	while (s[start] != '\0' && i < len)
	{
		res[i] == s[start];
		++i;
		++start;
	}
	return (res);
}
