/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:58:30 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/09 17:00:14 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned char	find;

	str = (char *)s;
	find = (char) c;
	while (n--)
	{
		if (*str == find)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
/* 
int main (void)
{
	char	str[] = {"AlphaBetaGamma"};
	int	s = 'B';
	size_t	n = 9;
	char *ans = memchr(str,s, n);
	printf("Finding %c in %s returns the pointer to %s which 
	is %p.\n",s,str,ans,ans);
	return(0);
	
	
} */
/* DESCRIPTION
The  memchr()  function scans the initial n bytes of the memory area pointed 
to by s for the first instance of c. Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char.

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
