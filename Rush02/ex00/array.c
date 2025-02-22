/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:16:53 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/02 14:33:08 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	print_array(int *array, int size);
int		ft_atoi(char *str);

void	create_array_rec(int *array, char **value, int pos)
{
	int	len;

	len = ft_strlen(*value);
	if (len <= 3)
	{
		array[pos] = ft_atoi(*value);
		return ;
	}
	if (len > 3)
	{
		array[pos] = ft_atoi(*value + len - 3);
		(*value)[len - 3] = '\0';
		create_array_rec(array, value, pos + 1);
	}
}

int	create_array(int *array, char **value)
{
	int	value_size;
	int	array_size;

	value_size = ft_strlen(*value);
	array_size = (value_size - 1) / 3 + 1;
	array = malloc(array_size * sizeof (int));
	if (!array)
		return (false);
	create_array_rec(array, value, 0);
	return (array_size);
}
