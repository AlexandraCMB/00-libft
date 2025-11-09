/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:58:30 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/09 18:38:16 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{

	char str[] = {"AlphaBetaGamma"};
	int s = 'B';
	size_t n = 9;
	char *ans = ft_memchr(str, s, n);
	printf("1) Finding %c in %s returns the pointer\n", s, str);
	printf("to %s which is %p\n", ans, ans);

	int strstr[7] = {-49, 49, 1, -1, 0, -2, 2};
	int x = -1;
	size_t y = 7;
	void *ans2 = ft_memchr(strstr, x, y);
	printf("FT_M) Finding %d in strstr returns\n", x);
	printf(" the pointer %p.\n", ans2);
	void *ans3 = memchr(strstr, x, y);
	printf("M) Finding %d in strstr returns\n", x);
	printf(" the pointer %p.\n", ans3);
	return (0);
}

/* DESCRIPTION
The  memchr()  function scans the initial n bytes of the memory area pointed
to by s for the first instance of c. Both c and the bytes of the memory area
pointed to by s are interpreted as unsigned char.

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char) c;
	while (*s != '\0')
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (*s == d)
		return ((char *)s);
	else
		return (NULL);

}
*/
