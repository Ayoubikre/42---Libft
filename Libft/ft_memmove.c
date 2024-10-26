/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:09:53 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/26 20:21:26 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		tmp1;
	unsigned char		tmp2;

	if (!src && !dest)
		return (NULL);
	d = dest;
	s = src;
	if (d == s)
		return (dest);
	i = 0;
	tmp1 = s[i];
	while (i < len)
	{
		tmp2 = s[i + 1];
		d[i] = tmp1;
		tmp1 = tmp2;
		i++;
	}
	return (dest);
}
