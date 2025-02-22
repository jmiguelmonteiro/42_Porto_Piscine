/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 10:31:37 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	i = 2;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
/* 
int main()
{
	printf("factorial 0: %d\n", ft_iterative_factorial(0));
	printf("factorial 7: %d\n", ft_iterative_factorial(7));
	printf("factorial -7: %d\n", ft_iterative_factorial(-7));
}
 */