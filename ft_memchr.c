/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:10:17 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/26 21:35:18 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		if (p[i] == c)
			return (p[i]);
		i++;
	}
	return (0);
}
