/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:52:02 by dasargsy          #+#    #+#             */
/*   Updated: 2024/02/05 23:54:43 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long x)
{
	if (x < 0)
		return (-x);
	return (x);
}

void	fill(char *a, long i, long nb, int flag)
{
	long	k;
	char	tmp;
	long	x;

	k = flag;
	x = i;
	while (k < i)
	{
		a[k] = ft_abs(nb % 10) + '0';
		nb = nb / 10;
		k++;
	}
	k = flag;
	while (k < i)
	{
		tmp = a[k];
		a[k] = a[i - 1];
		a[i - 1] = tmp;
		k++;
		i--;
	}
	a[x] = '\0';
}

char	*ft_itoa(long nb)
{
	long	i;
	long	j;
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
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (!a)
		return (NULL);
	if (nb < 0)
	{
		a[0] = '-';
		flag = 1;
	}
	fill(a, i, nb, flag);
	return (a);
}
