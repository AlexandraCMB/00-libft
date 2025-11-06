/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:07:49 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/06 14:57:30 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strstrmod(char *h, char *n);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char *bigsub;
	int i;

	i = 0;
	
	
	if(strstrmod == 1)
	{

	}	
}

int	strstrmod(char *h, char *n)
{
	int	i;
	int	j;

	i = 0;
	if (n[i] == '\0')
		return (1);
	while (h[i])
	{
		if (h[i] == n[0])
		{
			j = 0;
			while (n[j] && h[i + j] == n[j])
				j++;
			if (n[j] == '\0')
				return (1);
		}
		i++;
	}
	return (0);
}



/*PLAN()
Scenario searching
1) if all little ⊂ big (to len) >> from little to end of big
2) '' some ""					>> NULL
3) empty little 				>> all big

4) LITTLE NEEDS TO BE NULL TERMINATED - not coded in though 
5) If big isnt.. undefined behaaviour but not NULL

- Write STRSTR (modified so undefinded behaviour returns NULL ie
NEEDLE AND HAYSTACK BOTH HAVE TO BE NULL TERMED) - search for 
n in haystack where haystack is restrict to size of  len 
- say call it "big sub" if posso return "big"

*/
