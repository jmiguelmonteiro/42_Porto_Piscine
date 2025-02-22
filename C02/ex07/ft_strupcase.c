/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/20 16:29:13 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	uft_is_lowercase(char *c)
{
	if ((*c >= 'a') && (*c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (uft_is_lowercase(&str[i]))
			str[i] -= 32;
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
	printf("retorno: '%s'\n", ft_strupcase(pstring));
}
*/
