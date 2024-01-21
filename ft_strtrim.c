/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:21 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 21:33:46 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char	*s1, const char	*s2)
{
	size_t	i;
	size_t	sz;
	size_t	sz1;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	sz = ft_strlen((char *)s2);
	sz1 = ft_strlen((char *)s1);
	while (ft_memcmp(s1 + i, s2, sz) == 0)
	{
		i += sz;
	}
	while (ft_memcmp(&s1[sz1 - sz], s2, sz) == 0)
	{
		sz1 -= sz;
	}
	return (ft_substr((char *)s1, i, sz1 - i));
}
