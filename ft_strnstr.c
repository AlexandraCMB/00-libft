/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:07:49 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/06 16:12:59 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strstrmod(char *h, char *n);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return (big);
	while (big[i])
	{
		if (big[i] == little[0] && i < len)
			while (little[j] && big[i + j] == little[j])
				j++;
		i++;
	}
	return (NULL);
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
^^stupid.. strstr is nearly there .. just add in length restriction

*/
