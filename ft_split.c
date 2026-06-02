/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:52:48 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/02 19:45:59 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_s(char const *s, char c)
{
	size_t	len;
	char	*str_alloc;
	int		i;

	len = 0;
	i = 0;
	while (s[i] != c)
	{
		len++;
		i++;
	}
	str_alloc = (char *)malloc(len +1);
	str_alloc[0] = '\0';
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

static int	calc_len_to_increment(const char *main_str, char *curr_str, int i)
{
	int	len;

	len = ft_strlen((const char *) curr_str);
	if (main_str[len + i])
		return (len + 1);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str_splited;
	char	*str;
	int		count_c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	count_c = count_delimiter(s, c);
	str_splited = (char **)malloc((sizeof(char *) * (count_c + 2)));
	while (s[j])
	{
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
