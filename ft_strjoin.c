/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:48:30 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/19 17:44:43 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	char	*joined;
	size_t	i;

	i = 0;
	a = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(a * sizeof(char));
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, ft_strlen(s1));
	ft_strlcpy(joined + ft_strlen(s1) - 1, s2, ft_strlen(s2) + 1);
	return (joined);
}
