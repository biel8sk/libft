/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 21:22:58 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/30 22:02:48 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include "libft.h"

typedef struct s_test{
	char	*description;
	void	(*test)(void *);
	char	*result;
}	t_test;

typedef struct s_assert{
	void	*expected;
	void	*value;
}	t_assert;



#endif