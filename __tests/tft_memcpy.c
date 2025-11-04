/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:21:39 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/03 16:02:52 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	char d1[20];
	char d2[20] ;
	char *s = "Copy this";

//Normal memcpy
	void * r1 = memcpy(d1,s,10);
	printf("MEMCPY result:    %p\n", r1);
	printf("d1 addres:        %p\n", d1);
	printf("d1 contents:      %s\n\n", d1);

//My memcpy
	void *r2 = ft_memcpy(d2, s, 10);
	printf("FT_MEMCPY result: %p\n", r2);
	printf("d1 addres:        %p\n", d2);
	printf("d1 contents:      %s\n", d2);
	return (0);

    
}
