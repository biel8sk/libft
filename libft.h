/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:15:07 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 20:44:55 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_isdigt(int c);
int				ft_isalpha(int c);
unsigned int	ft_strlen(const char *str);
int				ft_strncmp(const char *str1, const char *str2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n);

#endif