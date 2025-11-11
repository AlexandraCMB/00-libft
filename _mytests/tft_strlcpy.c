/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:35:58 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:36:01 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	const char *src = "HelloAlex";
	char dst[50];
	size_t n = 4;

	printf("Ft_strlcpy output is: %lu\n", ft_strlcpy(dst,src,n));
	printf("Dest has changed to: %s\n", dst);
	return 0;
}
