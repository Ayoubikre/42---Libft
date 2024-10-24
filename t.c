/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:02:16 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/24 18:51:07 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
// #include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	while (n--)
	{
		*d++ = *s++;
		i++;
	}
	return (dst);
}

int	main(void)
{
	char		t2[] = "123456789";
	printf("orginal1 : %s\n", memcpy(t2+1, t2, 5));
	// printf("orginal2 : %s\n\n", ft_memcpy(t2+1, t2, 5));
	printf("orginal3 : %s\n", t2);
    
}
// ➜  test git:(master) ✗ ./t
// orginal1 : 00000áâaaaaaaaaaa
// orginal2 : helloáâaaaaaaaaaa
