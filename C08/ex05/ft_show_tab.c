/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:36:41 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/03 18:15:55 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "ft_stock_str.h"

/* 
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

#include <stdlib.h>
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
*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}
/* 
#include <stdio.h>
int	main(void)
{
	char *strings[]={ "one", "", "three" };
	t_stock_str *s1;
	int n = 3;

	s1 = ft_strs_to_tab(n, &*strings);
	ft_show_tab(s1);
	return (0);
}
 */