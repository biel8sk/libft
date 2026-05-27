/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:23:09 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:23:44 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*p;
	unsigned char	*p2;
	unsigned int	i;

	p = (unsigned char *)src;
	p2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p2[i] = p[i];
		i++;
	}
	return (p2);
}
