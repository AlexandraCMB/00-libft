/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:05:33 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/03 11:47:50 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy(void *dest, const void *src , size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (dest == NULL && src == NULL)
      return NULL;

    while( n > 0)
    {
      *d++ = *s++;
      n--;
    }
    return (dest);
}


/*

void *memcpy(void dest[restrict .n], const void src[restrict .n], size_t n);
DESCRIPTION
The  memcpy() function copies n bytes from memory area 
src to memory area dest.  The memory areas must not overlap.
  Use memmove(3) if the memory areas do overlap.
RETURN VALUE
       The memcpy() function returns a pointer to dest.

*/
