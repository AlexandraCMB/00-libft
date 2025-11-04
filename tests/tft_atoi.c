/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:53:08 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/03 20:29:01 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main ()
{
	const char s[20] = "\e475";
	printf(" Before: %s\n", s);
	printf(" After:  %d\n", ft_atoi(s));
	printf("ATOI:    %d\n", atoi(s));
	return(0);
}
