/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:59:16 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/03 20:18:11 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while ((str1[j] || str2[i]) && i < n && j < n)
	{
		if (str1[j] != str2[i])
			return (str1[j] - str2[i]);
		if (str1[j])
			j++;
		if (str2[i])
			i++;
	}
	return (str1[j -1] - str2[i -1]);
}
