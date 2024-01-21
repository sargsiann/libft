/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:37:29 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 16:39:30 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	i;
	char	*a;

	i = 0;
	a = NULL;
	while (string[i])
	{
		if (string[i] == (unsigned char)c)
		{
			a = (char *)(&string[i]);
		}
		i++;
	}
	if (string[i] == '\0' && string[i] == (unsigned char)c)
		a = (char *)(&string[i]);
	return (a);
}
