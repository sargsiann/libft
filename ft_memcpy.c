/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:19:43 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/15 15:09:26 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_memcpy(void	*restrict dest, const void	*restrict src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	while (n--)
	{
		d = s;
		d++;
		s++;
	}
	return (dest);
}
