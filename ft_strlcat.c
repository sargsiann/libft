/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:48:48 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/30 15:35:58 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (dstsize == 0)
		return (k);
	if (j >= dstsize)
		return (k + dstsize);
	while (src[i] && (j + i < (dstsize - 1)))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + k);
}
