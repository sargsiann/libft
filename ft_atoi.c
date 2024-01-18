/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:22:13 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/15 20:21:45 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static	int	check(const char *str)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '+' || str[i] == '-')
			count += 1;
		if (count == 2)
			return (0);
		if ((str[i] == 32 || (str[i] >= 8 && str[i] <= 13)) && count > 0)
			return (0);
		i++;
	}
	return (1);
}

static	int	isminus(const char *str)
{
	size_t	i;

	i = 0;
	if (check(str))
	{
		while (!(str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] == '-')
			{
				return (-1);
			}
			i++;
		}
	}
	return (1);
}

static void	putval(size_t *i, size_t *j, int *total, int *res)
{
	*total = 0;
	*res = 1;
	*i = 0;
	*j = 0;
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	j;
	int		total;
	int		res;

	putval(&i, &j, &total, &res);
	while (str[i] != '\0' && check(str) && total == 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i + j] >= '0' && str[i + j] <= '9')
			{
				if (j++ != 0)
					res *= 10;
			}
			while (res > 0)
			{
				total += res * (str[i++] - 48);
				res = res / 10;
			}
		}
		i++;
	}
	return (isminus(str) * (total));
}
