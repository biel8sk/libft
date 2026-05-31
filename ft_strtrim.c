/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 20:06:23 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/30 21:15:18 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_trimmed;
	char	*str_trimmed;
	int		i;
	size_t	len_set;

	len_trimmed = 0;
	i = 0;
	len_set = ft_strlen(set);
	while (*s1)
	{
		if (*s1 == *set && ft_strncmp(s1, set, len_set))
			s1++;
		len_trimmed++;
	}
	str_trimmed = (char *)malloc(len_trimmed +1);
	while (s1[i])
	{
		while (s1[i] != *set)
			str_trimmed[i] = s1[i];
		i++;
	}
	return (str_trimmed);
}
