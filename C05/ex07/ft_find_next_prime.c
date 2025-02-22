/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:24:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 12:32:45 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= (nb / 2))
		if ((nb % i++) == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/* 
int	main(void)
{
	printf("ft_find_next_prime 0: %d\n", ft_find_next_prime(0));
	printf("ft_find_next_prime 1: %d\n", ft_find_next_prime(1));
	printf("ft_find_next_prime -4: %d\n", ft_find_next_prime(-4));
	printf("ft_find_next_prime 5: %d\n", ft_find_next_prime(5));
	printf("ft_find_next_prime 8: %d\n", ft_find_next_prime(8));
	printf("ft_find_next_prime 17: %d\n", ft_find_next_prime(17));
}
 */