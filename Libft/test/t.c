/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:02:16 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/25 10:15:03 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

// #include "libft.h"

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	size_t				i;
// 	unsigned char		*d;
// 	const unsigned char	*s;

// 	i = 0;
// 	d = (unsigned char *)dst;
// 	s = (const unsigned char *)src;
// 	if (d == s)
// 		return (d);
// 	while (i < n)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	return (dst);
// }

// void	*ft_memmove(void *dest, const void *src, size_t len)
// {
// 	size_t				i;
// 	unsigned char		*d;
// 	const unsigned char	*s;
// 	unsigned char		temp[len];

// 	i = 0;
// 	d = (unsigned char *)dest;
// 	s = (const unsigned char *)src;
// 	if (d == s)
// 		return (dest);
// 	while (i < len)
// 	{
// 		temp[i] = s[i];
// 		printf("| %c |\n", temp[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < len)
// 	{
// 		d[i] = temp[i];
// 		i++;
// 	}
// 	return (dest);
// }

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s1;

	i = 0;
	s1 = 0;
	while (src[s1])
		s1++;
	while (dest && i < s1)
	{
		dst[i] = src[]
	}
}

int	main(void)
{
	char	src[] = "123456789";
	char	dest[] = "a000000000a";
	char	src2[] = "123456789";
	char	dest2[] = "a000000000a";

	// printf("orginal1 : %s\n", memcpy(t2+1, t2, 5));
	// printf("rst : %s\n\n", ft_memcpy(dest + 1, src, 9));
	// printf("src : %s\n", src);
	// printf("dst : %s\n", dest);
	//----------------
	// printf("\nrst : %s\n", memmove(src2 + 1, src2, 8));
	// printf("src : %s\n", src2);
	// printf("dst : %s\n", dest2);
	// printf("\n=============\n");
	// printf("rst : %s\n", ft_memmove(src + 1, src, 8));
	// printf("src : %s\n", src);
	// printf("dst : %s\n", dest);
	//----------------
	// printf("\nrst : %s\n", memmove(src2 + 1, src2, 8));
	// printf("src : %s\n", src2);
	// printf("dst : %s\n", dest2);
	// printf("\n=============\n");
	// printf("rst : %s\n", ft_memmove(src + 1, src, 8));
	// printf("src : %s\n", src);
	// printf("dst : %s\n", dest);
	//----------------
}
