/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_isalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:31:11 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/09 17:10:04 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main (void)
{
	int a = 's';
	int b = 'S';
	int c = '*';
	int d = -255;
	int e = '7';
	printf("Yes = 1, No = 0\n");
	printf(" Is %c alpha?:%d \n", a, ft_isalpha(a));
	printf(" Is %c alpha?:%d \n", b, ft_isalpha(b));
	printf(" Is %c alpha?:%d \n", c, ft_isalpha(c));
	printf(" Is %c alpha?:%d \n", d, ft_isalpha(d));
	printf(" Is %c alpha?:%d \n", e, ft_isalpha(e));
	return 0;
}
*/
