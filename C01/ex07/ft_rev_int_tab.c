/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:54:23 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/19 17:44:18 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	lim;

	i = 0;
	lim = size / 2 - 1;
	while (i <= lim)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
int	main(void)
{
	int	i[4] = {1, 2, 3, 4};
	int	j;
	int	*pont;

	pont = i;
	for (j = 0; j < 4; j++)
		printf("%d ", i[j]);
	printf("\n");
	ft_rev_int_tab(pont, 4);
	for (j = 0; j < 4; j++)
		printf("%d ", i[j]);
	printf("\n");
}
*/
