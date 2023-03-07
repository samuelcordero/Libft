/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:07:25 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/07 12:26:41 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	if (b == (void *) 0)
		return ((void *) 0);
	while (i < len)
	{
		b[i] = (unsigned char) c;
		++i;
	}
	return (b);
}
