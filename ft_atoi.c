/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:19:06 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/29 19:54:39 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	mount_n;
	int	i;

	i = 0;
	mount_n = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+' || str[i] <= 32 || str[i] == 127)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		mount_n = (mount_n * 10) + (str[i] - 48);
		i++;
	}
	mount_n *= sign;
	return (mount_n);
}
