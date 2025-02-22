/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/20 15:55:17 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_lowercase(char *c)
{
	if ((*c >= 'a') && (*c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	ret;

	ret = 1;
	while ((*str != '\0') && (ret == 1))
	{
		if (!uft_is_lowercase(str))
			ret = 0;
		str++;
	}
	return (ret);
}

/*
int	main(void)
{
	printf("string: '%s' retorno:%d\n", "teste", ft_str_is_lowercase("teste"));
	printf("string: '%s' retorno:%d\n", "", ft_str_is_lowercase(""));
	printf("string: '%s' retorno:%d\n", "comT", ft_str_is_lowercase("comT"));
	printf("string: '%s' retorno:%d\n", "com1", ft_str_is_lowercase("com1"));
}
*/
