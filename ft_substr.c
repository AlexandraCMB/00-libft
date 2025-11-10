/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 23:39:44 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/10 11:07:11 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 		*ft_substr(char const *s, unsigned int start, size_t len
{
	char 	*m;
	char	*sub;
	
	if( !s)
		return (NULL);
	m = malloc((sizeof(char) * len) + 1);
	if (!m)
		return (NULL);
	while (s)
	{
		s++;
		n--;
	}
	while (s && len > 0)
	{
		*m++ = * s++;
		len--;
	}
	return (m);
	
}

