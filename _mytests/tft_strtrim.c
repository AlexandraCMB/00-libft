/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:33:12 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:33:26 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	*s1;
	char	*set;
	char	*x;

	s1 = "!?!HELLO?!ALEX!!";
	set = "?!";
	printf("Trim '%s' by '%s' to get:\n", s1, set);
	x = ft_strtrim(s1, set);
	printf("'%s'\n", x);
	return (0);
}

