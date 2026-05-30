/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 21:22:58 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/29 22:06:09 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

typedef struct s_test{
	char	*description;
	void	(*test)(void);
	bool	result;
}	t_test;

struct s_assert
{
	void	*result;
	void	*value;
};

#endif