/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:40:20 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/26 21:38:47 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned char	*p;
	unsigned char	*p2;
	unsigned char	tmp;
	unsigned int	i;

	p2 = (unsigned char *) dest;
	p = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		tmp = p[i];
		p2[i] = tmp;
		i++;
	}
	return (p2);
}
