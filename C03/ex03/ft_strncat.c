/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/23 15:41:23 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i_dest;
	unsigned int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while ((src[i_src] != '\0') && (i_src < nb))
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
	char	str3[] = "DEFGHI";

	printf("%s\n", str2);
//	printf("%s\n", ft_strncat(str1, str3, 3));
//	printf("%s\n", ft_strncat(str1, str3, 10));
	printf("%s\n", ft_strncat(str1, str3, 0));
//	printf("%s\n", ft_strcat("ABC", ""));
//	printf("%s\n", ft_strcat("", "AB"));
//	printf("%s\n", ft_strcat("", ""));
}
*/
