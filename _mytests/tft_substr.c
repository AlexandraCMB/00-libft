/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:36:18 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:36:20 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main (void)
{
	char *str = "lorem ipsum dolor sit amet";
	int x = 7;
	int y = 10;
	printf("Substring of '%s' between %d and %d:\n",str,x,y);
	char *ss = ft_substr(str,x,y);
	printf("Answer is: %s",ss);
	return (0);
} 
