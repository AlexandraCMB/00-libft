/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpyX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:48:53 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/25 12:55:58 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:35:44 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/24 19:13:40 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	const char *	i;
	
	
	while ()
		src++;
	src_len = src;
	if(size == 0)
		return (src_len);
	while(*s < size - 1)
		*dst++ = *src++;
	*dst = 0;
	return(src_len);
}

#include <stdio.h>

int main(void)
{
	const char *src = "HelloAlex";
	char *dst;
	size_t n = 4;

	printf("Ft_strlcpy output is: %lu\n", ft_strlcpy(dst,src,n));
	printf("Dest has changed to: %s\n", dst);
	return 0;
}
