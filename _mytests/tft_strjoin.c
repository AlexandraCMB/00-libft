/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:44:25 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:35:49 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main (void)
{
	char *s1 = "Hello ";
	char *s2 = "Alex!";
	printf("S1 is: '%s', S2 is: '%s'\n",s1,s2);
	char *a = ft_strjoin(s1,s2);
	printf("Output: %s\n",a);
	return (0);
}
