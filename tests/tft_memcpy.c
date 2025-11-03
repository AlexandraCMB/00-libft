/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:21:39 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/03 12:10:32 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
    char d1[20];
    char *s1= "Copy this";  

    char d2[20] ;
    char *s2 = "Copy this";  

    printf("BEFORE COPY: \n")
    printf("Dest is: %s \n ", d1);
    printf("Src is: %s \n", s2);

    memcpy(d1,s1,strlen(s1)+1);
    ft_memcpy(d2, s2, strlen(s2)+ 1);
    
    print("AFTER COPY: \n");
    printf("OG memcpy: %s (mem address: %p)\n",), d1, *d1;
    printf("My memcpy: %p (mem address: %p) \n"), d2, *d2) ;

    
}
