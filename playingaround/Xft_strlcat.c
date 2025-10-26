/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:57:00 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/25 14:13:19 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	i;
	
	s = 0;
	d = 0;
	i = 0;
	while (dst[d])
		d++;
	while(src[s])
		s++;
	if (size <= d)
		return(s + size);
	while (src[i] && i  < size - d - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = 0;
	return(s+d);
}

int main (void)
{
	char src[]= "alex";	
	char dst[20] = "bob";
	size_t size = 10;
	
	printf("Source is %s \nDest before %s \n", src,dst);
	ft_strlcat(dst,src,size);
	printf("Dest after is %s, FT output is %li \n",dst,ft_strlcat(dst, src,size));
	
	return(0);
}
