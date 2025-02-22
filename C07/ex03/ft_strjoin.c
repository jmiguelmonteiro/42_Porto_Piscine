/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:58:24 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/30 12:15:02 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strjoin2(int size, char **strs, char *sep, char *result)
{
	int		i;
	int		offset;

	i = 0;
	offset = 0;
	while (i < size)
	{
		ft_strcpy(result + offset, strs[i]);
		offset += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(result + offset, sep);
			offset += ft_strlen(sep);
		}
		else
			ft_strcpy(result + offset, "\0");
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_len;

	if (size == 0)
		return (ft_strdup(""));
	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]) + ft_strlen(sep);
	total_len -= ft_strlen(sep);
	result = malloc((total_len + 1) * sizeof * result);
	if (!result)
		return (0);
	result = ft_strjoin2(size, strs, sep, result);
	return (result);
}
/* 
int	main(void)
{
	char	*arr[] = {"Jose", "Miguel", "Monteiro"};

	printf("%s\n", ft_strjoin(3, arr, " - "));
}
 */