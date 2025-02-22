/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:54:23 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/18 18:57:53 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
int	main(void)
{
	int	intdiv;
	int	intmod;
	int	*pdiv;
	int	*pmod;

	intdiv = 13;
	intmod = 4;
	pdiv = &intdiv;
	pmod = &intmod;
	ft_ultimate_div_mod(pdiv, pmod);
	printf("resultado: %d %d\n", intdiv, intmod);
}
*/
