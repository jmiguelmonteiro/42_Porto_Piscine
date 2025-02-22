/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:47:28 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/28 14:08:07 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
}
