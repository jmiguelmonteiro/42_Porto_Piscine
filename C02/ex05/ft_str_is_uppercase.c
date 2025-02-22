/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/20 16:01:12 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_uppercase(char *c)
{
	if ((*c >= 'A') && (*c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	ret;

	ret = 1;
	while ((*str != '\0') && (ret == 1))
	{
		if (!uft_is_uppercase(str))
			ret = 0;
		str++;
	}
	return (ret);
}

/*
int	main(void)
{
	printf("string: '%s' retorno:%d\n", "TESTE", ft_str_is_uppercase("TESTE"));
	printf("string: '%s' retorno:%d\n", "", ft_str_is_uppercase(""));
	printf("string: '%s' retorno:%d\n", "comT", ft_str_is_uppercase("comT"));
	printf("string: '%s' retorno:%d\n", "com1", ft_str_is_uppercase("com1"));
}
*/
