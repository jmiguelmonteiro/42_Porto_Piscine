/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 11:15:55 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}
/* 
int main()
{
	printf("ft_fibonacci -1: %d\n", ft_fibonacci(-1));
	printf("ft_fibonacci 0: %d\n", ft_fibonacci(0));
	printf("ft_fibonacci 1: %d\n", ft_fibonacci(1));
	printf("ft_fibonacci 5: %d\n", ft_fibonacci(5));
	printf("ft_fibonacci 10: %d\n", ft_fibonacci(10));
}
 */