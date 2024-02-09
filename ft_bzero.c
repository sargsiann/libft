/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:11:07 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/30 15:57:53 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)(s);
	while (n--)
	{
		*a = 0;
		a++;
	}
}
