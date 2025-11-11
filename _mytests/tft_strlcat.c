/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:35:52 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:35:54 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	const char *src = "Bob";
	char dst[20] = "Hello";
	size_t size = 0;
	while( size <= 10)
	{
	strcpy(dst,"Hello");
	printf("SIZE = %li\n ",size);
	printf("Starting numbers: src is %s, dest is %s\n", src,dst);
	printf("Output: %li\n", ft_strlcat(dst,src,size));
	printf("Catted string: %s\n\n", dst);
	size++;
	}
	return (0);
}
