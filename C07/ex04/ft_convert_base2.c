/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:15:00 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/06 10:55:53 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

bool	is_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || ((str[i] >= '\t') && (str[i] <= '\r')))
			return (false);
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

int	pos_in_base(char *c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c[0])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	value;

	if (!is_valid_base(base))
		return (0);
	signal = 1;
	value = 0;
	while ((*str == ' ') || ((*str >= '\t') && (*str <= '\r')))
		str++;
	while ((*str == '+') || (*str == '-'))
		if (*str++ == '-')
			signal *= -1;
	while (pos_in_base(str, base) != -1)
	{
		value = value * ft_strlen(base) + pos_in_base(str, base);
		str++;
	}
	return (value * signal);
}

int	get_result_length(int number, char *base)
{
	int	length;
	int	base_length;

	base_length = ft_strlen(base);
	length = 1;
	if (number < 0)
	{
		length++;
		number *= -1;
	}
	while (number >= base_length)
	{
		++length;
		number /= base_length;
	}
	return (++length);
}
