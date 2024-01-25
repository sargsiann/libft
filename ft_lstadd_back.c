/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:03:11 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/25 15:41:07 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list	*new)
{
	t_list	*a;

	if (!lst)
	{
		lst = &new;
		return ;
	}
	a = ft_lstlast(*lst);
	a->next = new;
}
