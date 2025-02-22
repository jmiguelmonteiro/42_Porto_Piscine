/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 10:41:12 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
/* 
int main()
{
	printf("factorial 0: %d\n", ft_recursive_factorial(0));
	printf("factorial 7: %d\n", ft_recursive_factorial(7));
	printf("factorial -7: %d\n", ft_recursive_factorial(-7));
}
 */