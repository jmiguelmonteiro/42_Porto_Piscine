/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/21 10:34:07 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_alpha(char *c)
{
	if ((*c >= 'A') && (*c <= 'Z'))
		return (1);
	if ((*c >= 'a') && (*c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	ret;

	ret = 1;
	while ((*str != '\0') && (ret == 1))
	{
		if (!uft_is_alpha(str))
			ret = 0;
		str++;
	}
	return (ret);
}

/*
int	main(void)
{
	printf("string: '%s' retorno:%d\n", "teste", ft_str_is_alpha("teste"));
	printf("string: '%s' retorno:%d\n", "", ft_str_is_alpha(""));
	printf("string: '%s' retorno:%d\n", "com1a", ft_str_is_alpha("com1a"));
	printf("string: '%s' retorno:%d\n", "com1", ft_str_is_alpha("com1"));
}
*/
