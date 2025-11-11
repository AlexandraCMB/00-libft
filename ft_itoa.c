/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:36:17 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 15:01:27 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <limits.h>

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		q;

	q = n;
//deal with negs
	if (n <= 0)
		i = 1;
	else
		i = 0;
	printf("q = %d\n",q); 
//LENGTH TO MALLOC
	while (q != 0)
	{
		q /= 10;
		i += 1;
	}
//MALLOC
	s = malloc(sizeof(char) * i + 1 );
	if (!s)
		return (NULL);
//MAKING STRING.from end
	*(s + i) = '\0';
	printf ("i (before)= %d\n",i);

/* 	if (n < 0)
		n *= -1; */
	while (i--)
	{
		printf ("i = %d\n",i);
		*(s + i) = abs(n % 10) + '0';
		printf ( "s[i] = %c\n",*(s+i));
		if (i == 0 && s == 0)
			*(s + i) = '-';
		n /= 10;
	}
	return (s);
}

int	main(void)
{
	int		x = INT_MIN;
	char	*y = ft_itoa(x);
	printf ("Int '%d' to char '%s'\n", x, y);
	return (0);
}


