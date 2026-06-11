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

int	count_words(char const *s, char c)
{
	int	count;
	int	j;
	int	i;

	count = 0;
	j = 0;
	i = 0;
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		i = j;
		while (s[i] != c && s[i])
			i++;
		j = i;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_splited;
	int		qnt_words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	qnt_words = count_words(s, c);
	str_splited = (char **)malloc((sizeof(char *) * (qnt_words + 1)));
	if (!str_splited)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		i = j;
		while (s[i] != c && s[i])
			i++;
		*str_splited++ = ft_substr(s, i - j, i);
		j = i;
	}
	*str_splited = 0;
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
