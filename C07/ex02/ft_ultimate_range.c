/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:58:09 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/30 14:06:34 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#define malloc(...) NULL;

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ret;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ret = malloc((max - min) * sizeof(int));
	if (!ret)
		return (-1);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	*range = ret;
	return (i);
}
/* 
int	main(void)
{
	int	*array;
	int	result;

	result = ft_ultimate_range(&array, 0, 5);

//	printf("result: %d\n", result);

	for (int i=0; i<5; i++ )
	{
		printf("%d\n", array[i]);
	}
}
 */