/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:58:05 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:21:10 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0 || (nmemb * size) > sizeof(unsigned int))
		return (NULL);
	return (malloc(nmemb * size));
}
