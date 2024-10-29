/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:12:04 by aakritah          #+#    #+#             */
/*   Updated: 2024/10/29 21:34:04 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_list_free(t_list **t)
{
	t_list	*ptr;
	t_list	*dl;

	ptr = *t;
	while (ptr)
	{
		dl = ptr;
		ptr = ptr->next;
		free(dl);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**t2;
	t_list	*n;
	t_list	*ptr;
	int		i;
	int		s1;

	i = 0;
	ptr = lst;
	s1 = ft_lstsize(lst);
	ft_lstiter(lst, f);
	t2 = malloc(sizeof(t_list *));
	if (!t2)
		return (NULL);
	while (i < s1)
	{
		n = ft_lstnew(ptr->content);
		if (!n)
			return (ft_list_free(t));
		ft_lstadd_front(t2, n);
		ptr = ptr->next;
		i++;
	}
}
