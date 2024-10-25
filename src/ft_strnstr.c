/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:48:25 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/25 19:30:34 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hy, const char *nd, size_t len)
{
	size_t	i;
	size_t	s1;
	size_t	s2;

	i = 0;
	s1 = ft_strlen((char *)nd);
	s2 = ft_strlen((char *)hy);
	if (s1 == 0)
		return ((char *)hy);
	while (i < len)
	{
		if (hy[i] == nd[0])
			if (ft_strncmp(hy + i, nd, s1) == 0)
				return ((char *)(hy + i));
		i++;
	}
	return (NULL);
}
