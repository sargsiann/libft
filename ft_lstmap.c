/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:04:15 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/31 17:06:04 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!lst || !f || !del || !new_list)
		return (NULL);
	tmp = new_list;
	while (lst)
	{
		tmp->content = (*f)(lst->content);
		if (!lst->next)
			tmp->next = NULL;
		else
		{
			tmp->next = (t_list *)malloc(sizeof(t_list));
			if (!tmp->content || !tmp->next)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (new_list);
}
