/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:46:08 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/25 14:52:50 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	uft_issignal(char *c)
{
	char	ws[2];
	int		i;

	ws[0] = '-';
	ws[1] = '+';
	i = 0;
	while (i < 2)
	{
		if (*c == ws[i++])
			return (1);
	}
	return (0);
}

int	uft_isspace(char *c)
{
	char	ws[6];
	int		i;

	ws[0] = ' ';
	ws[1] = '\f';
	ws[2] = '\n';
	ws[3] = '\r';
	ws[4] = '\t';
	ws[5] = '\v';
	i = 0;
	while (i < 6)
	{
		if (*c == ws[i++])
			return (1);
	}
	return (0);
}

int	uft_is_numeric(char *c)
{
	if ((*c >= '0') && (*c <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	signal;
	int	offset;
	int	value;

	signal = 1;
	value = 0;
	offset = 0;
	while (uft_isspace(&str[offset]))
		str++;
	while (uft_issignal(&str[offset]))
	{
		if (str[offset] == '-')
			signal *= -1;
		str++;
	}
	while ((str[offset] != '\0') && uft_is_numeric(&str[offset]))
	{
		value = 10 * value + str[offset] - '0';
		offset++;
	}
	return (value * signal);
}

/*
int main(void)
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("   ---+-+0012345ab567"));
}
*/