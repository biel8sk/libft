/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:27:11 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/02 20:00:21 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 1;
	while (n > 10)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

void	calc_operations_and_set_char(char *a, int n, int len)
{
	int	temp;
	int	power;
	int	i;

	i = 0;
	while (len > 0)
	{
		temp = n;
		power = 1;
		while (temp > 10)
		{
			temp /= 10;
			power *= 10;
		}
		n -= temp * power;
		temp += 48;
		a[i] = temp;
		len--;
		i++;
	}
	a[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;

	len = get_len(n);
	a = (char *)malloc(len * sizeof(char) + 1);
	calc_operations_and_set_char(a, n, len);
	return (a);
}
// int	main(void)
// {
// 	#include "stdio.h"

// 	printf("%s ", ft_itoa(123));
// 	printf("%s ", ft_itoa(48928));
// }
