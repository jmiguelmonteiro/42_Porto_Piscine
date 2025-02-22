/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:11:19 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/17 11:43:45 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	out[4];	

	out[0] = 48;
	while (out[0] <= 55)
	{
		out[1] = 49;
		while (out[1] <= 56)
		{
			out[2] = 50;
			while (out[2] <= 57)
			{
				if ((out[0] < out[1]) && (out[0] < out[2]) && (out[1] < out[2]))
				{
					write(1, out, 3);
					if (!((out[0] == 55) && (out[1] == 56) && (out[2] == 57)))
						write(1, ", ", 2);
				}
				out[2]++;
			}
			out[1]++;
		}
		out[0]++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
