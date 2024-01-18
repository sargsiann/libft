/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:00:26 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/19 00:18:42 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd(fd, '-');
	}
	if (n < 10)
	{
		ft_putchar_fd(fd, n + 48);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(fd, n % 10 + 48);
}
