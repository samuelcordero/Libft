/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:07:12 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 13:21:12 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_intsize(int n)
{
	unsigned int	size;

	size = 0;
	while (n / 10 != 0)
	{
		n /= 10;
		++size;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	size;
	unsigned int	limit;
	long			ntmp;

	size = ft_intsize(n);
	limit = 0;
	ntmp = n;
	if (ntmp <= 0)
		size += 1;
	result = (char *) malloc(sizeof(char) * size);
	if (!result)
		return (result);
	if (ntmp < 0)
	{
		result[0] = '-';
		ntmp *= -1;
		limit = 1;
	}
	while (--size >= limit)
	{
		result[size] = (ntmp % 10) + '0';
		ntmp /= 10;
	}
	return (result);
}
