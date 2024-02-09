/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:21 by dasargsy          #+#    #+#             */
/*   Updated: 2024/02/03 18:31:35 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	includes(char c, const char *string)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char	*s1, const char	*s2)
{
	size_t	i;
	size_t	s1_end;
	char	*trimmed;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_end = ft_strlen((char *)s1);
	while (includes(s1[i], s2) && s1[i])
	{
		i++;
	}
	while (includes(s1[s1_end - 1], s2) && s1_end > i)
	{
		s1_end--;
	}
	trimmed = (char *)malloc(sizeof(char) * (s1_end - i + 1));
	if (!trimmed)
		return (NULL);
	ft_memmove(trimmed, s1 + i, s1_end - i);
	trimmed[s1_end - i] = '\0';
	return (trimmed);
}

//int main()
//{
//	char *a = ft_strtrim("xx Davv xx","x");
//	printf("%s",a);
//}
