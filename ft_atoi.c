/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:49:40 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/07 13:57:05 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	n;
	int	i;

	n = 0;
	sign = 1;
	i = 0;
	while (str[i] != '-' && str[i] != '+' && str[i] < '0' && str[i] > '9')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n *= 10;
		n += str[i] - 48;
		++i;
	}
	return (n * sign);
}
