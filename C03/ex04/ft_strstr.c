/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/23 16:36:56 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uft_is_included(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (&str[0]);
	i = 0;
	while (str[i] != '\0')
	{
		if (uft_is_included(&str[i], &to_find[0]))
			return (&str[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[20] = "";
	char	str2[20] = "";

	printf("u:%p %p %s\n", str1, ft_strstr(str1, str2), ft_strstr(str1, str2));
	printf("s:%p %p %s\n", str1, strstr(str1, str2), strstr(str1, str2));
//	printf("%s\n", ft_strcat("ABC", ""));
//	printf("%s\n", ft_strcat("", "AB"));
//	printf("%s\n", ft_strcat("", ""));
}
 */