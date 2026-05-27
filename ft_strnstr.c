/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:53:37 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:38:49 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int n)
{
	int	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		if (ft_strncmp(big, little, n -1) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
