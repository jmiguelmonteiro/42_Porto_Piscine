/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:01:10 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/19 14:32:16 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int a, int b);
void	rushxx(int a, int b, int c);

int	main(int argc, char *argv[])
{
	int		modresult;
	char	firstloginletter;

	if (argc < 2)
		firstloginletter = 'j';
	else
		firstloginletter = argv[1][0];
	if ((firstloginletter < 'a') || (firstloginletter > 'z'))
		write(1, "Sorry, login not supported.\n", 29);
	modresult = ((int) firstloginletter - 96) % 5;
	if (modresult == 0)
		rush(5, 3);
	else if (modresult == 1)
		rushxx(5, 3, 1);
	else if (modresult == 2)
		write(1, "Sorry, Rush02 not yet implemented.\n", 35);
	else if (modresult == 3)
		rushxx(5, 3, 3);
	else if (modresult == 4)
		rushxx(5, 3, 4);
	return (0);
}
