/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:55:25 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/05 16:22:31 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char) c;
	while (*s != d)
		s++;
	while (s)
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (s != NULL)
		return (NULL);
	else
		return (NULL);
}
