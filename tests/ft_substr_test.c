/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 21:21:43 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/30 22:02:33 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test(void)
{
	ft_strncmp("bcd", ft_substr("abcdef", 2, 3), 3);
	ft_strncmp("ef", ft_substr("abcdef", 5, 10), 2);
	ft_strncmp("189543", ft_substr("***189543***", 4, 6), 6);
}

int	main(void)
{
}
