/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:53:08 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/26 16:00:44 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	countm;
	int	num;

	countm = 1;
	num = 0;
	while (*nptr == ' ' || *nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			countm *= -1;
		nptr++;
	}
	while (*nptr >= '0' & *nptr <= '9')
	{
		num = 10 * num + (*nptr - '0');
		nptr++;
	}
	return (countm * num);
}
/* 
int main ()
{
	const char s[20] = "    --+-3948 ";
	printf(" Before: %s\n", s);
	printf(" After: %d\n", ft_atoi(s));
	return(0);
}
*/
