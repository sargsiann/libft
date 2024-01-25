/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:39:58 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/25 13:45:04 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static size_t	count_size(char const *s, char c)
{
	size_t	size;
	size_t	i;
	int		flag;

	size = 0;
	i = 0;
	flag = 0;
	while (i <= ft_strlen(s))
	{
		flag = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			if (!flag)
			{
				flag = 1;
				size++;
			}
			i++;
		}
		i++;
	}
	return (size);
}

static void	fill_splited(char **splitted, char const *s, char c)
{
	size_t	i;
	size_t	lenght;
	size_t	sp_c;

	i = 0;
	lenght = 0;
	sp_c = 0;
	while (i <= ft_strlen(s))
	{
		lenght = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			lenght++;
		}
		if (lenght > 0)
		{
			splitted[sp_c++] = ft_substr((char *)s, i - lenght, lenght);
		}
		i++;
	}
}

//static	int	includes(char c, const char *string)
//{
//	size_t	i;
//
//	i = 0;
//	while (i <= ft_strlen(string))
//	{
//		if (string[i] == c)
//			return (1);
//		i++;
//	}
//	return (0);
//}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**splitted;

	if (!s)
		return (NULL);
	size = count_size(s, c);
	if (!*s)
	{
		splitted = (char **)malloc(sizeof(char *) * (1));
		splitted[0] = NULL;
		return (splitted);
	}
	splitted = (char **)malloc(sizeof(char *) * (size + 1));
	if (!splitted)
		return (NULL);
	fill_splited(splitted, s, c);
	splitted[size] = NULL;
	if (!splitted)
		return (NULL);
	return (splitted);
}

//int main()
//{
//	char *a = "tripoule";
//	char **x = ft_split(a,'\0');
//	printf("%s",x[0]);
//}