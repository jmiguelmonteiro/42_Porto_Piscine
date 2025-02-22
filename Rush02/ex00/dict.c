/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:10:58 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/02 19:48:58 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "include.h"

char	*load_dict_content(char *dict)
{
	int		fd;
	char	*content;
	int		bytes_read;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(4096 * sizeof(char));
	if (!content)
		return (0);
	bytes_read = read(fd, content, sizeof(content));
	close(fd);
	if (bytes_read <= 0)
		return (0);
	content[bytes_read] = '\0';
	return (content);
}

t_dict	*parse_dict_content(char *dict)
{
	dict = NULL;
	return (0);
}
