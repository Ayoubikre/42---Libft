/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:49:03 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/29 21:33:22 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*dl;

	ptr = *lst;
	while (ptr)
	{
		dl = ptr;
		ptr = ptr->next;
		del(dl->content);
		free(dl);
	}
	*lst = NULL;
}
