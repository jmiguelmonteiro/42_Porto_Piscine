/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:14:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/06 10:55:58 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

bool	is_valid_base(char *str);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
int		get_result_length(int number, char *base);

void	reverse_str(char *str, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		str[i] ^= str[len - 1];
		str[len - 1] ^= str[i];
		str[i] ^= str[len - 1];
		i++;
		len--;
	}
}

void	ft_putnbr_base_str(long int nb, char *base, int len_base, char *result)
{
	int			i_result;

	i_result = 0;
	if (nb == 0)
		result[i_result++] = base[(nb % len_base)];
	if (nb < 0)
	{
		result[i_result++] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		result[i_result++] = base[(nb % len_base)];
		nb = nb / len_base;
	}
	result[i_result] = '\0';
	if (result[0] == '-')
		reverse_str((result + 1), i_result - 1);
	else
		reverse_str(result, i_result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result_decimal;	
	char	*result;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (0);
	result_decimal = ft_atoi_base(nbr, base_from);
	result = malloc(get_result_length(result_decimal, base_to) * sizeof (char));
	if (!result)
		return (0);
	ft_putnbr_base_str(result_decimal, base_to, ft_strlen(base_to), result);
	return (result);
}
/* 
int	main(void)
{
	char	*nbr = "42";
	char	*base_from = "0123456789";
	char	*base_to = "01";

//	printf("%s\n", ft_strcat("", "a"));
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}
 */