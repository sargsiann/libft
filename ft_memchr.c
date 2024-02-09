/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:00:43 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/28 16:42:58 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*ptr, int ch, size_t count)
{
	unsigned char	*a;

	a = (unsigned char *)(ptr);
	while (count--)
	{
		if (*a == (unsigned char)(ch))
		{
			return (a);
		}
		a++;
	}
	return (NULL);
}
