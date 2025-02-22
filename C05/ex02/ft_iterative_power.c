/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 11:01:58 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if ((nb == 0) && (power == 0))
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/* 
int main()
{
	printf("power 1 -1: %d\n", ft_iterative_power(1, -1));
	printf("power 0 0: %d\n", ft_iterative_power(0, 0));
	printf("power 0 1: %d\n", ft_iterative_power(0, 1));
	printf("power 1 0: %d\n", ft_iterative_power(1, 0));
	printf("power 2 3: %d\n", ft_iterative_power(2, 3));
}
 */