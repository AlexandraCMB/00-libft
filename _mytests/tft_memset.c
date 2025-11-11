/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:35:18 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:35:20 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
