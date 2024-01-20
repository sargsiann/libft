/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:39:04 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/20 20:03:37 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)ptr;
	while (num--)
	{
		*byte_ptr = (unsigned char)value;
		byte_ptr++;
	}
	return (ptr);
}
