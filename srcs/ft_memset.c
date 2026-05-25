/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:01:16 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/24 21:36:42 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *buffer, int c, unsigned int size)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = buffer;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
