/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:47:55 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/07 16:03:08 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	counter;

	counter = 0;
	result = (void *) malloc(nmemb * size);
	while (counter < nmemb * size)
	{
		((char *)result)[counter] = 0;
		++counter;
	}
	return (result);
}
