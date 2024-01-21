/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:43:29 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 19:35:34 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const	char *little, size_t	n)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	size = ft_strlen(little);
	while (i < n && big[i])
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < n && big[i + j])
			{
				j++;
			}
			if (j == size)
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
