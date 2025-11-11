/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:46:18 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/10 18:30:21 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	char	*end; 
	size_t	len;

	start = s1;
	end = s1 + st_strlen(s1) - 1;
	while (*start && is_in_set(*start, set))
		start++;
	while (end >= start && is_in_set(*end, set))
		end--;
	len = 0;
	while(start <= end)
		len++;
 
	
}

static

static int	is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
} 

