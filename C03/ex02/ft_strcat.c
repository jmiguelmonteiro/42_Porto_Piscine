/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/23 15:41:17 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	str1[] = "ABC";
	char	str2[] = "                     ";
	char	str3[] = "DEF";

	printf("%s\n", str2);
	printf("%s\n", ft_strcat(str1, str3));
//	printf("%s\n", ft_strcat("ABC", ""));
//	printf("%s\n", ft_strcat("", "AB"));
//	printf("%s\n", ft_strcat("", ""));
}
*/
