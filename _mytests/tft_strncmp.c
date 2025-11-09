/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:47:06 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/09 21:18:48 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char s1[] = "t";
	char s2[] = "";
	int d1 = 0;
	int a1 = ft_strncmp(s1, s2, d1);
	int b1 = strncmp(s1, s2, d1);

	char s3[] = "1234";
	char s4[] = "1235";
	int d2 = 3;
	int a2 = ft_strncmp(s3, s4, d2);
	int b2 = strncmp(s3, s4, d2);

	char s5[] = "44";
	char s6[] = "4";
	int d3 = 2;
	int a3 = ft_strncmp(s5, s6, d3);
	int b3 = strncmp(s5, s6, d3);

	char s7[] = "test\200";
	char s8[] = "test\0";
	int d4 = 6;
	int a4 = strncmp(s7, s8, d4);
	int b4 = strncmp(s7, s8, d4);

printf("~~   Inputs        ~~\n");
printf("S1: %-10s| S2: %-10s| n: %d\n", s1, s2, d1);
printf("S3: %-10s| S4: %-10s| n: %d\n", s3, s4, d2);
printf("S5: %-10s| S6: %-10s| n: %d\n", s5, s6, d3);
printf("S7: %-10s| S8: %-10s| n: %d\n", s7, s8, d4);
printf("~~   My outputs    ~~\n");
printf("Ans is: %d\n", a1);
printf("Ans is: %d\n", a2);
printf("Ans is: %d\n", a3);
printf("Ans is: %d\n", a4);
printf("~~ Actual outputs  ~~\n");
printf("Ans is: %d\n", b1);
printf("Ans is: %d\n", b2);
printf("Ans is: %d\n", b3);
printf("Ans is: %d\n", b4);

	return (0);
}
