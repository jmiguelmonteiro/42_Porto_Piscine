/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:10:24 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/19 13:33:24 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	whattodo04(int ai, int li, int a, int l)
{
	if (ai == 1)
		if (li == 1)
			ft_putchar('A');
	else if (li == l)
		ft_putchar('C');
	else
		ft_putchar('B');
	else
		if (ai == a)
			if (li == 1)
				ft_putchar('C');
	else if (li == l)
		ft_putchar('A');
	else
		ft_putchar('B');
	else if ((li == 1) || (li == l))
		ft_putchar('B');
	else
		ft_putchar(' ');
	if (li == l)
		ft_putchar('\n');
}

void	whattodo03(int ai, int li, int a, int l)
{
	if (ai == 1)
		if (li == 1)
			ft_putchar('A');
	else if (li == l)
		ft_putchar('C');
	else
		ft_putchar('B');
	else
		if (ai == a)
			if (li == 1)
				ft_putchar('A');
	else if (li == l)
		ft_putchar('C');
	else
		ft_putchar('B');
	else if ((li == 1) || (li == l))
		ft_putchar('B');
	else
		ft_putchar(' ');
	if (li == l)
		ft_putchar('\n');
}

void	whattodo01(int ai, int li, int a, int l)
{
	if (ai == 1)
		if (li == 1)
			ft_putchar('/');
	else if (li == l)
		ft_putchar('\\');
	else
		ft_putchar('*');
	else
		if (ai == a)
			if (li == 1)
				ft_putchar('\\');
	else if (li == l)
		ft_putchar('/');
	else
		ft_putchar('*');
	else if ((li == 1) || (li == l))
		ft_putchar('*');
	else
		ft_putchar(' ');
	if (li == l)
		ft_putchar('\n');
}

void	rushxx(int l, int a, int rush)
{
	int	ai;
	int	li;

	ai = 1;
	while (ai <= a)
	{
		li = 1;
		while (li <= l)
		{
			if (rush == 1)
				whattodo01(ai, li, a, l);
			if (rush == 3)
				whattodo03(ai, li, a, l);
			if (rush == 4)
				whattodo04(ai, li, a, l);
			li++;
		}
		ai++;
	}
}

void	rush(int l, int a)
{
	int	ai;
	int	li;

	ai = 1;
	while (ai <= a)
	{
		li = 1;
		while (li <= l)
		{
			if ((ai == 1) || (ai == a))
				if ((li == 1) || (li == l))
					ft_putchar('o');
			else
				ft_putchar('-');
			else
				if ((li == 1) || (li == l))
					ft_putchar('|');
			else
				ft_putchar(' ');
			if (li == l)
				ft_putchar('\n');
			li++;
		}
		ai++;
	}
}
