/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameronen <ameronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:43:50 by ameronen          #+#    #+#             */
/*   Updated: 2024/01/29 20:29:40 by ameronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power --;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	int num;
	int pwr;

	num = 5;
	pwr = 3;

	printf("number %d to power of %d is %d\n", num, pwr,
   	ft_iterative_power(num, pwr));
return (0);
}
*/
