/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/21 10:05:25 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*initialdest;

	initialdest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (initialdest);
}

/*
int	main(void)
{
	char	origem[] = "teste string";
	char	destino[] = "";
	char	*ori = origem;
	char	*des = destino;
	char	*retorno;

	printf("origem,	antes: %s\n", origem);
	printf("destino, antes: %s\n", destino);
	retorno = ft_strcpy(des, ori);
	printf("destino, depois: %s\n", destino);
	printf("retorno: %s\n", retorno);
}
*/
