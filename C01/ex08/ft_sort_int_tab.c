/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:54:23 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/19 17:29:10 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	swapped;
	int	i;

	i = 0;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

/*
int	main(void)
{
	int	i[4] = {3, 5, 1, 9};
	int	j;
	int	*pont;

	pont = i;
	for (j = 0; j < 4; j++)
		printf("%d ", i[j]);
	printf("\n");
	ft_sort_int_tab(pont, 4);
	for (j = 0; j < 4; j++)
		printf("%d ", i[j]);
	printf("\n");
}
*/
