/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <abrunjes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:21:27 by abrunjes          #+#    #+#             */
/*   Updated: 2025/11/12 16:21:45 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main (void)
{
	int i = 0;
	char *s = "Hello- how,- are- you?";
	char c = ' ';
	printf("Before: '%s'\n", s);
	printf("Delim : '%c'\n", c);
	printf("After :");

	char **d = ft_split(s, c);
	if (d)
	{
		while (d[i])
		{
			printf(" '%s'", d[i]);
			i++;
		}
		printf("\n");
		i = 0;
		while (d[i])
			free(d[i++]);
		free(d);
	}
	else
	{
		printf(" NULL\n");
	}
	return (0);
}
