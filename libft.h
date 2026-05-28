/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:15:07 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/27 21:09:41 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_isdigt(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_print(int c);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
unsigned int	ft_strlen(const char *str);
int				ft_strncmp(const char *str1, const char *str2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n);
int				ft_atoi(char *str);
void			*ft_bzero(void *buffer, unsigned int size);
void			*ft_calloc(unsigned int nmemb, unsigned int size);

#endif