/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:54:23 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/18 18:34:03 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/*
int	main(void)
{
	int	inteiro1;
	int	inteiro2;
	int	*p1;
	int	*p2;

	inteiro1 = 10;
	inteiro2 = 20;
	p1 = &inteiro1;
	p2 = &inteiro2;
	printf("antes: %d %d\n", inteiro1, inteiro2);
	ft_swap(p1, p2);
	printf("depois: %d %d\n", inteiro1, inteiro2);
}
*/
