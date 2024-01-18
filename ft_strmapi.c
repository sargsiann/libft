/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:10 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/18 15:49:52 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char	c))
{
	unsigned int	i;
	char			*string;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!string)
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
