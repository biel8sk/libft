/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:08:16 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/30 19:21:52 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = 0;
	sub = malloc(len);
	if (sub == 0)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i -1];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
