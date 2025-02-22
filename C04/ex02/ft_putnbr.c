/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:41:49 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/27 18:42:18 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
//	ft_putnbr(-2147483647);
	ft_putnbr(INT_MIN);
}
*/