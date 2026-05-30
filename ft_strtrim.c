/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 20:06:23 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/30 20:54:55 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_occurrence(char *str, char *set)
{
	size_t	i;
	size_t	len_little;
	int		count;

	i = 0;
	len_little = ft_strlen(set);
	if (!*set)
		return (0);
	while (str[i])
	{
		if (ft_strncmp(str, set, len_little) == 0)
			return (count);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s;
	char	*str_trimmed;
	int		i;

	len_s = 0;
	i = 0;
	while (*s1)
	{
		while (*s1 != *set)
			len_s++;
		s1++;
	}
	str_trimmed = (char *)malloc(len_s +1);
	while (s1[i])
	{
		while (s1[i] != *set)
			str_trimmed[i] = *s1;
		i++;
	}
}
