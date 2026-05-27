/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:42:44 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:28:03 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static unsigned int	ft_strlen(const char *c)
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

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	while (src[i] && i < size -1)
	{
		dest[len_dest -1 + i] = src[i];
		i++;
	}
	if (!dest[i])
		dest[i] = '\0';
	return (size - len_dest -1);
}
