/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 12:09:10 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	find_sqrt(int n, int guess)
{
	if ((guess * guess) > n)
		return (0);
	if ((guess * guess) < n)
		return (find_sqrt(n, guess + 1));
	return (guess);
}

int	ft_sqrt(int nb)
{
	return (find_sqrt(nb, 1));
}
/* 
int	main(void)
{
	printf("ft_sqrt 0: %d\n", ft_sqrt(0));
	printf("ft_sqrt 1: %d\n", ft_sqrt(1));
	printf("ft_sqrt 4: %d\n", ft_sqrt(4));
	printf("ft_sqrt -4: %d\n", ft_sqrt(-4));
	printf("ft_sqrt 8: %d\n", ft_sqrt(8));
	printf("ft_sqrt 25: %d\n", ft_sqrt(25));
}
 */