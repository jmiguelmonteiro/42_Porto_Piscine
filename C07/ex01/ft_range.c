/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:58:09 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/29 18:04:23 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#define malloc(...) NULL;

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof * array);
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/* 
int	main(void)
{
	int	*array;
	
	array = ft_range(4, 3);

	for (int i=0; i<2; i++ )
	{
		printf("%d\n", array[i]);
	}
}
 */