/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:58:09 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/06 16:58:02 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#define malloc(...) NULL;

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

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*str_copy;

	str_copy = malloc((ft_strlen(src) + 1) * sizeof * str_copy);
	if (!str_copy)
		return (0);
	str_copy = ft_strcpy(str_copy, src);
	return (str_copy);
}
/* 
int	main(void)
{
	char	*str = "teste";
	char	*str_copy;

	str_copy = ft_strdup(str);
	printf("return: %s\n", str_copy);
}
 */