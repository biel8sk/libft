/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:40:20 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/25 21:17:48 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	char	*p;
	char	*p2;
	char	tmp;
	int		i;

	p2 = dest;
	p = src;
	i = 0;
	while (i < n)
	{
		tmp = p[i];
		p2[i] = tmp;
		i++;
	}
	return (p2);
}
