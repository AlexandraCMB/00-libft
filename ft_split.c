/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:39:06 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 19:10:06 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**m;

	if (!s)
		return (NULL);

	wc = word_count(s, c)
	m = malloc(sizeof(char *) * wc + 1);

}


static int	word_count(char const *s, char c)
{
	int	check;
	int	words;

	check = 1;
	words = 0;
	while (*s)
	{
		if (*s != c && check)
		{
			words++;
			check = 0;
		}
		if (*s == c)
			check = 1;
		s++;
	}
	return (words);
}


static char *make_word(char const *s)
{
	
}

