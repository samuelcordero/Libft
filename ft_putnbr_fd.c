/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:22:01 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/14 16:07:25 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*to_print;

	if (fd >= 0)
	{
		to_print = ft_itoa(n);
		if (to_print)
		{
			ft_putstr_fd(to_print, fd);
			free(to_print);
		}
	}	
}
