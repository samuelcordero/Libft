/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:27:00 by sacorder          #+#    #+#             */
/*   Updated: 2023/03/09 16:39:25 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	counter;
	unsigned int	position;

	counter = 1;
	position = 0;
	while (s[position] != '\0')
	{
		if (s[position] == c && position > 0)
			if (s[position - 1] != c)
				++counter;
		++position;
	}
	return (counter);
}

char	*ft_get_word_pos(char const *s, char c, unsigned int position);

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	word_nb;
	unsigned int	position;

	word_nb = ft_count_words(s, c);
	result = (char **) malloc(sizeof(char *) * (word_nb + 1));
	position = 0;
	if (!result)
		return (result);
	while (position < word_nb)
	{
		result[position] = ft_get_word_pos(s, c, position);
		++position;
	}
	result[position] = (void *) 0;
	return (result);
}
