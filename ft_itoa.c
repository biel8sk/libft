/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:27:11 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/01 19:21:15 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_power_ten(int n, int *count)
{
	int	mount;

	count = 0;
	mount = 10;
	if (n < 10)
		return (0);
	while (n > mount)
	{
		mount *= 10;
		count ++;
	}
	return (mount);
}

char	*ft_itoa(int n)
{
	// decobrir quantas casas tem o numero
	// allocar na memoria um a string
	// pra cada casa 
	//	calcular a potencia necessária para que a subtracao do numero
	//	seja maior ou igual a 0
	//	subtrair da maior potencia e subtrair o resto da potencia passan
	//	o resto da subtracao anterior
	//	contar quantas casas precisa ate chegar na potencia
	//
	// pela soma da potencia e verificar se é 
	// menor 
	// 
	// pra pegar o ultimo valor
	// 
}
