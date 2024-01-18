/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:39:04 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/15 14:26:09 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*byte_ptr;

	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	while (num--)
	{
		*byte_ptr = (unsigned char)value;
		byte_ptr++;
	}
	return (ptr);
}
