/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:43:36 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/07 13:06:18 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	catlen;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		++i;
	catlen = dstsize - i;
	while ((j < catlen - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (i + 1);
}
