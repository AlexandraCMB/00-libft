/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 20:07:23 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/09 21:02:48 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*mall;
	char	*scheck;

	scheck = (char *)s;
	if (!s)
		return (NULL);
	size = ft_strlen(scheck) + 1;
	mall = malloc(size * sizeof(char));
	if (!mall)
		return (NULL);
	ft_memcpy(mall, s, size);
	return (mall);
}
/* int main(void)
{
	char s[] = "Bisous";

	printf("~~ Real funct. ~~\n");
	char *a = strdup(s);
	printf("Input: %s, output: %p\n\n", s, a);

	printf("~~ My funct. ~~\n");
	char *b = ft_strdup(s);
	printf("Input: %s, output: %p\n", s, b);
	return (0);
}
 */
