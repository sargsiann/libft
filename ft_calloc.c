/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:35:10 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 19:12:46 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = malloc(num * size);
	if (!a)
		return (NULL);
	b = (unsigned char *)(a);
	while (i < num * size)
	{
		b[i] = 0;
		i++;
	}
	return (a);
}
