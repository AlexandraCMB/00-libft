/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:13:08 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/26 11:40:06 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main (void)
{
	int a = 's';
	int b = 'S';
	int c = '*';
	int d = 1;
	int e = '7';
	printf("Yes = 1, No = 0\n");
	printf(" Is %c alpha?:%d \n", a, ft_isalnum(a));
	printf(" Is %c alpha?:%d \n", b, ft_isalnum(b));
	printf(" Is %c alpha?:%d \n", c, ft_isalnum(c));
	printf(" Is %c alpha?:%d \n", d, ft_isalnum(d));
	printf(" Is %c alpha?:%d \n", e, ft_isalnum(e));
	return 0;
}
*/
