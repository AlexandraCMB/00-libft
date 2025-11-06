/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:58:30 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/06 19:09:27 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	
	
	
}
/* DESCRIPTION
The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of
c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char) c;
	while (*s != '\0')
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (*s == d)
		return ((char *)s);
	else
		return (NULL);

}
 */
