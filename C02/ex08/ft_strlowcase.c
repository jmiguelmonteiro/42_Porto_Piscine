/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/20 16:33:27 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_uppercase(char *c)
{
	if ((*c >= 'A') && (*c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (uft_is_uppercase(&str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	string[] = "TeSTe";
	char	*pstring = string;

	printf("string: '%s'\n", string);
	printf("retorno: '%s'\n", ft_strlowcase(pstring));
}
*/
