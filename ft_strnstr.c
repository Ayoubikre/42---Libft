/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:48:25 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/26 16:00:12 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hy, const char *nd, size_t len)
{
	size_t	i;
	size_t	s1;

	i = 0;
	s1 = ft_strlen(nd);
	if (!hy && len == 0)
		return (NULL);
	if (s1 == 0)
		return ((char *)hy);
	while (hy[i] && i + s1 <= len)
	{
		if (hy[i] == nd[0])
		{
			if (ft_strncmp(hy + i, nd, s1) == 0)
				return ((char *)(hy + i));
		}
		i++;
	}
	return (NULL);
}
