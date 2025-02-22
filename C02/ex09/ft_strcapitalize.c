/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/21 10:45:08 by josemigu         ###   ########.fr       */
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

int	uft_is_lowercase(char *c)
{
	if ((*c >= 'a') && (*c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	inbetween;

	i = 0;
	inbetween = 1;
	while (str[i] != '\0')
	{
		if (uft_is_alpha(&str[i]))
		{
			if (inbetween)
			{
				if (uft_is_lowercase(&str[i]))
				{
					str[i] -= 32;
					inbetween = 0;
				}
			}
		}
		else
			inbetween = 1;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
    char	string[] = "ola, tud bem? 42avras quarenta-e-duas; cinquenta+e+um";
    char	*pstring = string;

	printf("string: '%s'\n", string);
	printf("retorno: '%s'\n", ft_strcapitalize(pstring));
}
*/
