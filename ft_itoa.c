/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:36:17 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 15:04:32 by abrunjes         ###   ########.fr       */
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
	i = 0;
	if (n <= 0)
		i = 1;
	printf ("q = %d\n",q);
	while (q != 0)
	{
		q /= 10;
		i += 1;
	}
	s = malloc(sizeof(char) * i + 1 );
	if (!s)
		return (NULL);
	*(s + i) = '\0';
	while (i--)
	{
		*(s + i) = abs(n % 10) + '0';
		if (i == 0 && *s == '0')
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


