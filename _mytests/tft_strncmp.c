/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:47:06 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/09 19:41:08 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char s1[] = "t";
	char s2[] = "";
	char s3[] = "1234";
	char s4[] = "1235";
	char s5[] = "44";
	char s6[] = "4";
	char s7[] = "5";
	char s8[] = "55";
	int d1 = 0;
	int d2 = 3;
	int d3 = 2;
	int d4 = 2;
	int a1 = ft_strncmp(s1, s2, d1);
	int a2 = ft_strncmp(s3, s4, d2);
	int a3 = ft_strncmp(s5, s6, d3);
	int a4 = strncmp(s7, s8, d4);
	int b1 = strncmp(s1, s2, d1);
	int b2 = strncmp(s3, s4, d2);
	int b3 = strncmp(s5, s6, d3);
	int b4 = strncmp(s7, s8, d4);

	printf("~~   My function   ~~\n");
	printf("S1: '%s', S2: '%s',n: %d, so ans is %d\n", s1, s2, d1, a1);
	printf("S3:  '%s', S4:  '%s',n: %d, so ans is %d\n", s3, s4, d2, a2);
	printf("S5:   '%s', S6:    '%s',n: %d, so ans is %d\n", s5, s6, d3, a3);
	printf("S6:    '%s', S8:   '%s',n: %d, so ans is %d\n\n", s7, s8, d4, a4);
	printf("~~ Actual function ~~\n");
	printf("S1: '%s', S2: '%s',n: %d, so ans is %d\n", s1, s2, d1, b1);
	printf("S3:  '%s', S4:  '%s',n: %d, so ans is %d\n", s3, s4, d2, b2);
	printf("S5:   '%s', S6:    '%s',n: %d, so ans is %d\n", s5, s6, d3, b3);
	printf("S6:    '%s', S8:   '%s',n: %d, so ans is %d\n", s7, s8, d4, b4);

	return (0);
}
