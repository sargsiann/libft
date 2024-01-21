/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:48:30 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 21:30:06 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *)malloc(a * sizeof(char));
	if (!joined)
		return (NULL);
	ft_memmove(joined, s1, ft_strlen(s1));
	ft_memmove(joined + ft_strlen(s1), s2, ft_strlen(s2));
	joined[a - 1] = '\0';
	return (joined);
}
