/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:47:28 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 15:20:42 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

void	ft_reverse_str_array(char *array[], int n)
{
	char	*temp;
	int		i;

	i = 0;
	while (i < n)
	{
		temp = array[i];
		array[i] = array[n - 1];
		array[n - 1] = temp;
		i++;
		n--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_reverse_str_array(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
}
