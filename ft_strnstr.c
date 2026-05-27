/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:53:37 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/26 20:18:24 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n);

char	*ft_strnstr(const char *big, const char *little, unsigned int n)
{
	int	i;

	i = 0;
	if (!*little)
		return (big);
	while (big[i])
	{
		if (ft_strncmp(big, little, n -1) == 0)
			return (&big[i]);
		i++;
	}
	return (0);
}
