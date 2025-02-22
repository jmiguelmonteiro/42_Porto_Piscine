/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:32:13 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/02 19:36:59 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

char	*ft_ltrim_plus(char *s)
{
	if (*s == '+')
		s++;
	return (s);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

int	ft_atoi(char *str)
{
	int			signal;
	long int	value;

	signal = 1;
	value = 0;
	while ((*str == ' ') || ((*str >= '\t') && (*str <= '\r')))
		str++;
	if ((*str == '+') || (*str == '-'))
		if (*str++ == '-')
			signal *= -1;
	while ((*str >= '0') && (*str <= '9'))
		value = value * 10 + *str++ - '0';
	value = signal * value;
	if (value < INT_MIN)
		value = INT_MIN;
	if (value > INT_MAX)
		value = INT_MAX;
	return (value);
}
