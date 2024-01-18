/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:46:19 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/18 15:50:16 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const	*s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, s);
		i++;
	}
}
