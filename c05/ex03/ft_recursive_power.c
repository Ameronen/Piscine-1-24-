/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameronen <ameronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:37:09 by ameronen          #+#    #+#             */
/*   Updated: 2024/01/29 20:32:20 by ameronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else
		return (result);
}
/*
#include <stdio.h>

int main()
{
	int number = 5;
	int power = 1;

	int result = ft_recursive_power(number, power);

	printf("number %d to power %d equals: %d\n", number, power, result);

	return(0);
}
*/
