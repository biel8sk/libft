/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:01:16 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:24:14 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *buffer, int c, unsigned int size)
{
	unsigned char	*p;
	unsigned int	i;

	i = 0;
	p = (unsigned char *)buffer;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
