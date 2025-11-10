/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 23:39:44 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/10 13:09:19 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		 	*d;
	char const	 	*offset;
	unsigned int 	s_len;
	unsigned int	bytes;
//null
	if (!s)
		return(NULL);
	s_len = ft_strlen(s);
//start beyond length .. 
	if(start >= s_len)
		return(ft_strdup(""));
//how many bytes to malloc 
	if(len + start > s_len)
		bytes = s_len - start;
	else 
		bytes = len;
//malloc those bytes		
	d = malloc((sizeof(char) * bytes) + 1);
	if (!d)
		return (NULL);
//start substring
	offset = (s + start) ;
	ft_memmove(d, offset, bytes);
	d[bytes] = '\0';
	return (d);
}