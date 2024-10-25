/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:25:51 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/25 16:59:24 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s1;
	size_t	s2;

	s1 = 0;
	while (src[s1])
		s1++;
	s2 = 0;
	while (dst[s2])
		s2++;
	if (dstsize <= s2)
		return (dstsize + s1); // car dstsize == s2  || dstsize == 0
	i = 0;
	while (src[i] && s2 + i < dstsize - 1)
	{
		dst[s2 + i] = src[i];
		i++;
	}
	dst[s2 + i] = '\0';
	return (s1 + s2);
}
