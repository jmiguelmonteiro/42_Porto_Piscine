/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:19:05 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/04 14:16:01 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include.h"

bool	process_input(int n, char *params[], char **value, char **dict);
void	ft_putstr(char *str);
bool	process_value(int *array, int ngroups, char *dict);
char	*load_dict_content(char *dict);
int		create_array(int *array, char **value);
t_dict	*parse_dict_content(char **dict);

int	main(int argc, char *argv[])
{
	char	*value;
	char	*dict_name;
	char	*dict_content;
	int		*array;
	int		ngroups;

	value = "";
	dict_name = "";
	array = NULL;
	if (!process_input(argc, argv, &value, &dict_name))
	{
		ft_putstr("Error\n");
		return (1);
	}
	ngroups = create_array(array, &value);
	dict_content = load_dict_content(dict_name);
	if (!dict_content)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	parse_dict_content(&dict_content);
	free(dict_content);
	free(array);
	return (0);
}
