/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:21 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/23 00:06:25 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	includes(char c, const char *string)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return (1);
		i++;
	}
	if (string[i] == '\0' && string[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(const char	*s1, const char	*s2)
{
	size_t	i;
	size_t	sz1;

	i = 0;
	if (!s1)
		return (NULL);
	sz1 = ft_strlen((char *)s1);
	while (includes(s1[i], s2))
	{
		i++;
	}
	while (includes(s1[sz1], s2))
	{
		sz1--;
	}
	return (ft_substr((char *)s1, i, sz1 - i + 1));
}

