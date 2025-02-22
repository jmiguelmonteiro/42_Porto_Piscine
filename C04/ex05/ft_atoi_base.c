/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:41:50 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/04 18:04:22 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
/* 
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_atoi_base("10", "0123456789"));
	printf("%d\n", ft_atoi_base("-42", "0123456789"));
	printf("%d\n", ft_atoi_base("A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("42", "01234567ABF"));
	printf("%d\n", ft_atoi_base("42C", "01234567ABF"));
	printf("%d\n", ft_atoi_base("    +-+------F", "01234567ABF"));
	printf("%d\n", ft_atoi_base("Z", "01234567ABFF"));
}
 */