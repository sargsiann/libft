/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:37:29 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/20 20:10:00 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)c)
		{
			return ((char *)(&string[i]));
		}
		i--;
	}
	return (NULL);
}
