/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:58:50 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/24 11:16:30 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int a)
{
	if (a > 32 && a < 127)
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
	printf(" Is %c alpha?:%d \n", a, ft_isprint(a));
	printf(" Is %c alpha?:%d \n", b, ft_isprint(b));
	printf(" Is %c alpha?:%d \n", c, ft_isprint(c));
	printf(" Is %c alpha?:%d \n", d, ft_isprint(d));
	printf(" Is %c alpha?:%d \n", e, ft_isprint(e));
	return 0;
}
*/
