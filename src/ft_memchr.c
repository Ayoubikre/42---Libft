/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:11:31 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/25 19:30:13 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t = s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return ((void *)(t + i));
		i++;
	}
	return (NULL);
}
