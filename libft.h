/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrunjes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:20:41 by abrunjes          #+#    #+#             */
/*   Updated: 2025/10/25 16:02:46 by abrunjes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

\\check functions
int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);


\\memory functions
void	ft_bzero(void	*s, size_t n);
void	*ft_memset(void *s, int c, size_t n);


\\string functions
size_t	ft_strlcpy( char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);




#endif
