/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:42:44 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/03 20:42:07 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	if (len_dest < dst_size)
	{
		while (src[i] && i < dst_size - len_dest -1)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		if (!dest[len_dest + i])
			dest[len_dest + i] = '\0';
	}
	return (len_dest + ft_strlen(src));
}
