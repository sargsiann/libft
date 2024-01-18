/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:39:58 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/16 21:54:58 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	fill(char	**splited, char c, char const *s)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c || i == 0)
		{
			j = 1;
			while (s[i + j] != c && s[i + j] != '\0')
			{
				j++;
			}
			if (j == 1)
				splited[count] = ft_substr((char *)s, i, j);
			else
				splited[count] = ft_substr((char *)s, i + 1, j - 1);
			count++;
			i = i + j - 1;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**splited;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c || i == 0)
		{
			count++;
		}
		i++;
	}
	splited = (char **)malloc(count * sizeof(char *));
	fill(splited, c, s);
	return (splited);
}
