/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:39:06 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/12 14:56:06 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c);
static char		*word_make(char const *s,char c);
static int		word_len(char const *s, char c);
static char		**freedom(char **s, int i);

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**mpointer;
	int		i;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	mpointer = malloc(sizeof(char *) * (wc + 1));
	if (!mpointer)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			mpointer[i] = word_make(s, c);
			if (!mpointer[i])
				return (freedom(mpointer, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	mpointer[i] = NULL;
	return (mpointer);
}

//size to malloc fo **mpointer
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

//s here is actuall word. not delimieter!!
static char	*word_make(char const *s, char c)
{
	int		letters;
	char	*mchar;
	int		i;

	i = 0;
	letters = word_len(s, c);
	mchar = malloc(sizeof(char) * (letters + 1));
	if (!mchar)
		return (NULL);
	*(mchar + letters) = '\0';
	while (i < letters)
	{
		mchar[i] = s[i];
		i++;
	}
	return (mchar);
}

//modified strlen in otder to use in word_make
static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	**freedom(char **s, int i)
{
	while (i > 0)
		free(s[--i]);
	free(s);
	return (NULL);
}
/* 
int	main (void)
{
	int i = 0;
	char *s = "Hello- how,- are- you?";
	char c = ' ';
	printf("Before: '%s'\n", s);
	printf("Delim : '%c'\n", c);
	printf("After :");

	char **d = ft_split(s, c);
	if (d)
	{
		while (d[i])
		{
			printf(" '%s'", d[i]);
			i++;
		}
		printf("\n");
		i = 0;
		while (d[i])
			free(d[i++]);
		free(d);
	}
	else
	{
		printf(" NULL\n");
	}
	return (0);
}
 */
