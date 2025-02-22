/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:55:00 by josemigu          #+#    #+#             */
/*   Updated: 2025/02/06 12:51:35 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
		if (charset[i] == c)
			return (true);
	else
		i++;
	return (false);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (is_separator(*str, charset))
			str++;
		if ((*str) && (!is_separator(*str, charset)))
		{
			count++;
			while ((*str) && (!is_separator(*str, charset)))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !is_separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;

	result = malloc((count_words(str, charset) + 1) * sizeof (char *));
	if (!result)
		return (0);
	i = 0;
	while (*str)
	{
		while (is_separator(*str, charset))
			str++;
		if ((*str) && (!is_separator(*str, charset)))
		{
			result[i] = malloc_word(str, charset);
			i++;
			while ((*str) && (!is_separator(*str, charset)))
				str++;
		}
	}
	result[i] = 0;
	return (result);
}
/* 
int	main(void)
{
	char	*str = " string de teste. ola .- final-2";
	char	*charset = " .-";
	char	**result;
	int		i = 0;

	result = ft_split(str, charset);

//	printf("main: is_separator: %d\n", is_separator('g', charset));
//	printf("main: %d\n", count_words(str, charset));

	while(result[i] != 0)
	{
		printf("%d: %s\n", i, result[i]);
		i++;
	}

 }
  */