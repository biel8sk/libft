/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:53:37 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/30 20:20:28 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	len_little;

	i = 0;
	len_little = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (big[i] && i < n)
	{
		if (ft_strncmp(big, little, len_little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
