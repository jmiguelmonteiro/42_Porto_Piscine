/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:41:49 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/04 18:04:12 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

bool	is_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '-') || (str[i] == '+'))
			return (false);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (false);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (false);
	return (true);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			mod;
	long int	nb;
	int			len_base;

	nb = nbr;
	len_base = ft_strlen(base);
	if (!is_valid_base(base))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= len_base)
		ft_putnbr_base(nb / len_base, base);
	mod = (nb % len_base);
	write(1, &base[mod], 1);
}
/* 
#include <limits.h>
int	main(void)
{
	ft_putnbr_base(3, "abc\td");
	write(1, "\n", 1);
	ft_putnbr_base(10, "+01");
	write(1, "\n", 1);
	ft_putnbr_base(10, "-02");
	write(1, "\n", 1);
	ft_putnbr_base(0, ".123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-100, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);
} */