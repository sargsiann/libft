/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:02:42 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/31 16:32:33 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*st;

	if (!lst || !del)
		return ;
	st = *lst;
	while (st)
	{
		tmp = st;
		st = st->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
