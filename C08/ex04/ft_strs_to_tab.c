/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:10:45 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/03 18:06:42 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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
	while (*str++)
		count++;
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s1;

	s1 = malloc((ac + 1) * sizeof (t_stock_str));
	if (!s1)
		return (0);
	i = 0;
	while (i < ac)
	{
		s1[i].size = ft_strlen(av[i]);
		s1[i].str = av[i];
		s1[i].copy = ft_strdup(av[i]);
		i++;
	}
	s1[i].str = 0;
	return (s1);
}
/* 
#include <stdio.h> 
int	main(void)
{
	char *strings[]={ "str1", "0", "", "str2" };
	//struct s_stock_str *s1;
	t_stock_str *s1;
	int i = 0;
	int n = 4;

	s1 = ft_strs_to_tab(n, &*strings);
	while (i <= n)
	{
		printf("%d %s %s\n", s1[i].size, s1[i].str, s1[i].copy);
		i++;
	}
	free(s1);
	return (0);
}
  */