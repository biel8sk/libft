/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:52:21 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:36:02 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	str_len;

	str_len = ft_strlen(str);
	while (str[str_len -1])
	{
		if (str[str_len] == c)
			return ((char *)&str[str_len]);
		str_len--;
	}
	return (0);
}
