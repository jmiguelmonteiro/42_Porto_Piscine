/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:54:23 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/18 18:48:44 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	intdiv;
	int	intmod;
	int	*pdiv;
	int	*pmod;

	pdiv = &intdiv;
	pmod = &intmod;
	ft_div_mod(13, 4, pdiv, pmod);
	printf("resultado: %d %d %d %d\n", 13, 4, intdiv, intmod);
}
*/
