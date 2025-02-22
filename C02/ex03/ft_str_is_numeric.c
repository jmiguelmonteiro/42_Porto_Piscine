/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/20 15:36:46 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_numeric(char *c)
{
	if ((*c >= '0') && (*c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	ret;

	ret = 1;
	while ((*str != '\0') && (ret == 1))
	{
		if (!uft_is_numeric(str))
			ret = 0;
		str++;
	}
	return (ret);
}

/*
int	main(void)
{
	printf("string: '%s' retorno:%d\n", "1234", ft_str_is_numeric("1234"));
	printf("string: '%s' retorno:%d\n", "", ft_str_is_numeric(""));
	printf("string: '%s' retorno:%d\n", "com1a", ft_str_is_numeric("com1a"));
	printf("string: '%s' retorno:%d\n", "com1", ft_str_is_numeric("com1"));
}
*/
