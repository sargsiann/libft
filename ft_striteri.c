/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:46:19 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/22 23:42:40 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	char	*a;

	a = (char *)s;

	if (s && f)
	{
		i = 0;
		while (*a)
			(*f)(i++, a++);
	}
}
