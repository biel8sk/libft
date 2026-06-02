/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:25:00 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/01 21:20:40 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	while (dest[j])
		j++;
	while (src[i] && i < n -1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (src_len);
}
