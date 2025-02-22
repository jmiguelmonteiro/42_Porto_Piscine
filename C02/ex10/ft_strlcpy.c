/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/21 11:14:34 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((i < (size - 1)) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i + 1);
}

/*
int	main(void)
{
	char	origem[] = "123456789";
	char	destino[] = "";
	char	*ori = origem;
	char	*des = destino;
	unsigned int	retorno;

	printf("origem,	antes: %s\n", origem);
	printf("destino, antes: %s\n", destino);
	retorno = ft_strlcpy(des, ori, 0);
	printf("destino, depois: %s\n", destino);
	printf("retorno: %d\n", retorno);
}
*/
