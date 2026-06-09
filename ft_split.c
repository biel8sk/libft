/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:52:48 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/08 21:19:42 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_s(char const *s, char c)
{
	size_t	len;
	char	*str_alloc;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	str_alloc = (char *)malloc(len +1);
	s -= len;
	while (*s != c && *s)
	{
		*str_alloc = *s;
		str_alloc++;
		s++;
	}
	*str_alloc = 0;
	return (str_alloc - len);
}

int	count_words(char const *s, char c)
{
	int	count;
	int	j;
	int is_t;

	count = 0;
	j = 0;
	is_t = s[j] == c;
	while (s[j])
	{
		while (is_t && s[j])
		{
			j++;
			if (!s[j])
				break ;
		}
		is_t = s[j] != c;
		count++;
		j++;
	}
	return (count);
}

static int	calc_len_to_increment(const char *main_str, char *curr_str, int i)
{
	size_t	len;

	len = ft_strlen((const char *) curr_str);
	if (len == ft_strlen(main_str))
		return (len);
	if (main_str[len + i])
		return (len + 1);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str_splited;
	char	*str;
	int		qnt_words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	qnt_words = count_words(s, c);
	str_splited = (char **)malloc((sizeof(char *) * (qnt_words + 1)));
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		str = alloc_s(&s[j], c);
		j += calc_len_to_increment((const char *)&s[j], str, j);
		str_splited[i] = str;
		i++;
	}
	str_splited[i] = 0;
	return (str_splited);
}

// int	main(void)
// {
// 	char *str = "skate,or,die";

// 	char **arr_str = ft_split(str, ',');
// 	#include "stdio.h"
// 	for (int i =0; i < 3; i++)
// 	{
// 		printf("%s ", arr_str[i]);
// 	}
// }
