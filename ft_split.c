/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:52:48 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/31 22:25:36 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_s(char const *s, char c)
{
	size_t	len;
	char	*str_alloc;

	len = 0;
	while (*s != c)
	{
		len++;
		s++;
	}
	str_alloc = (char *)malloc(len +1);
	ft_strlcpy(str_alloc, s, len);
	return (str_alloc);
}

int	count_delimiter(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		       count++;
		s++;	
	}
	return (count);
}

char	**split(char const s, char c)
{
	char	**str_splited;
	char	*str;
	int	count_c;
	size_t	i;
	size_t	j;

	i = 0;
	count_c = count_delimiter(s, c);
	str_splited = (char **)malloc((sizeof(int) * count_c) + 1);
	while (s[j])
	{
		str = alloc_s(&s[j], c);
		if (s[j +1])
			s += ft_strlen((char const *)str) + 1;
		else
			s++;
		str_splited[i] = str;
	}
	str_splited[j] = 0;
	return (str_splited);
}
