/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:52:21 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/26 21:56:40 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while (*c)
	{
		count++;
		c++;
	}
	return (count);
}

char	*ft_strrchr(char *str, int c)
{
	int	str_len;

	str_len = ft_strlen(str);
	while (str[str_len -1])
	{
		if (str[str_len] == c)
			return (&str[str_len]);
		str_len--;
	}
	return (0);
}
