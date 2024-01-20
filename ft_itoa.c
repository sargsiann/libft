/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:52:02 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/19 20:20:21 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}

void	fill(char *a, int i, int nb, int flag)
{
	int		k;
	char	tmp;

	k = flag;
	while (k < i)
	{
		a[k] = abs(nb % 10) + 48;
		nb = nb / 10;
		k++;
	}
	k = flag;
	while (k < i / 2)
	{
		tmp = a[i - k];
		a[i - k] = a[k];
		a[k] = tmp;
		k++;
	}
}

char	*ft_itoa(int nb)
{
	int		i;
	int		j;
	char	*a;
	int		flag;

	i = 0;
	j = nb;
	flag = 0;
	while (j)
	{
		j = j / 10;
		i++;
	}
	if (nb == 0 || nb < 0)
		i++;
	a = (char *)malloc(sizeof(char) * i + 1);
	if (nb < 0)
	{
		a[0] = '-';
		flag = 1;
	}
	fill(a, i, nb, flag);
	a[i] = '\0';
	return (a);
}
