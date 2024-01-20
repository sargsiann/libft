/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:48:48 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/20 16:45:50 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
	{
		i++;
	}
	if (!(i >= dstsize && dstsize == 0))
	{
		while (src[j] && j < dstsize - i - 1)
		{
			dst[i] = src[j];
			j++;
			i++;
		}
	}
	dst[i] = '\0';
	return (i);
}
