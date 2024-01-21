/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:48:48 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 19:01:41 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *restrict	dst, const char *restrict src,
size_t	maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	dstlen = strnlen(dst, maxlen);
	srclen = strlen(src);
	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < maxlen - dstlen)
	{
		memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, maxlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
