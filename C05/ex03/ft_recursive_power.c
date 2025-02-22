/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 10:59:34 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0) && (power == 0))
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
/* 
int main()
{
	printf("power 1 -1: %d\n", ft_recursive_power(1, -1));
	printf("power 0 0: %d\n", ft_recursive_power(0, 0));
	printf("power 0 1: %d\n", ft_recursive_power(0, 1));
	printf("power 1 0: %d\n", ft_recursive_power(1, 0));
	printf("power 2 3: %d\n", ft_recursive_power(2, 3));
}
 */