/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:35:23 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/11 16:35:41 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
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
