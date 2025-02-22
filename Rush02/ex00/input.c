/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:25:03 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/02 13:08:43 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
void	print_array(int *array, int size);
int		ft_strlen(char *str);
char	*ft_ltrim_plus(char *s);

bool	check_valid_value(char *value)
{
	int	i;

	i = 0;
	if (value[i] == '+')
		i++;
	while (value[i] != '\0')
	{
		if ((value[i] < '0') || (value[i] > '9'))
			return (false);
		i++;
	}
	return (true);
}

bool	check_number_args(int n)
{
	if ((n < 2) || (n > 3))
		return (false);
	return (true);
}

bool	process_input(int argc, char *argv[], char **value, char **dict)
{
	if (!check_number_args(argc))
		return (false);
	if (argc == 2)
	{
		*value = argv[1];
		*dict = "numbers.dict";
	}
	else
	{
		*value = argv[2];
		*dict = argv[1];
	}
	if (!check_valid_value(*value))
		return (false);
	*value = ft_ltrim_plus(*value);
	return (true);
}
