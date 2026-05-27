/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 20:37:28 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/26 21:09:40 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	ft_isdigt(int c);

extern int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigt(c));
}
