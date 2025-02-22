/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/20 16:13:32 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_printable(char *c)
{
	if ((*c >= 32) && (*c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	ret;

	ret = 1;
	while ((*str != '\0') && (ret == 1))
	{
		if (!uft_is_printable(str))
			ret = 0;
		str++;
	}
	return (ret);
}

/*
int	main(void)
{
	printf("string: '%s' retorno:%d\n", "~ j", ft_str_is_printable("~ j"));
	printf("string: '%s' retorno:%d\n", "", ft_str_is_printable(""));
	printf("string: '%s' retorno:%d\n", "	", ft_str_is_printable("	"));
	printf("string: '%s' retorno:%d\n", "com1", ft_str_is_printable("com1"));
}
*/
