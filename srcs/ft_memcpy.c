/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:23:09 by gpires-c          #+#    #+#             */
/*   Updated: 2026/05/25 21:12:35 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char			*p;
	char			*p2;
	unsigned int	i;

	p = src;
	p2 = dest;
	i = 0;
	while (i < n)
	{
		p2[i] = p[i];
		i++;
	}
	return (p2);
}
// #include <stdio.h>
// #include <string.h>

// void    *ft_memmove(void *dest, void *src, unsigned int n)
// {
//     char    *p;
//     char    *p2;
//     char    tmp;
//     int        i;

//     p2 = dest;
//     p = src;
//     i = 0;
//     while (i < n)
//     {
//         tmp = p[i];
//         p2[i] = tmp;
//         i++;
//     }
//     return (p2);
// }

// void    *ft_memcpy(void *dest, const void *src, unsigned int n)
// {
//     char            *p;
//     char            *p2;
//     unsigned int    i;

//     p = src;
//     p2 = dest;
//     i = 0;
//     while (i < n)
//     {
//         p2[i] = p[i];
//         i++;
//     }
//     return (p2);
// }

// int main() {

//   char src[3] = "oia";
//   char dest[5];
  
//   //ft_memmove((void *) &src[0], (void *) &src[1], 2 * 4);
//   memcpy((void *) &src[0], (void *) &src[1], 2 * 4);

//   for (int i = 0; i < 2; i++)
//     printf("%d ", src[i]);
// }
