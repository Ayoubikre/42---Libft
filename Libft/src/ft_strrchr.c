/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:02:27 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/23 21:19:06 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchar(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == c)
			temp = (char *)s;
		s++;
	}
	return (temp);
}
