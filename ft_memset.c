/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:42:40 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/24 14:51:26 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *t;
	t = (unsigned char *)s;
	size_t	i;
	i = 0;
	while (i < n)
	{
		t[i]=(unsigned char) c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char t[] = "ALEX";
	char t2[] = "ALEX";
	int c = 'A';
	size_t n = strlen(t);
	printf(" Before: %s \n", t);
	ft_memset(t,c,n);
	memset(t2, c, n);
	printf(" After: %s \n", t);
	printf("%d \n", memcmp(t, t2, n));
}
