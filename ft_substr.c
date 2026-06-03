/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:08:16 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/03 20:06:24 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	len_s = ft_strlen(s);
	if (start >= len_s && start + len < len_s)
		return (NULL);
	while (i < start)
		i++;
	sub = (char *)malloc(len +1);
	while (*s && j < len)
	{
		sub[j] = s[i + j];
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
