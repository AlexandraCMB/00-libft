/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:21:39 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/03 11:30:56 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
    unsigned char *d1 = "Copy this";
    unsigned char *s1;  

   unsigned char *d2 = "Copy this";
    unsigned char *s2;  

    printf("Dest is %d ", d1);
    printf("Src is %d ", d2);

    printf("OG memcpy: %d\n", memcpy(d1,s1,strlen(d1)+1));
    printf("My memcpy: %d\n", ft_memcpy(d2,s2,strlen(d2+1)));

    
}