/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:28:57 by iarefeva          #+#    #+#             */
/*   Updated: 2024/05/29 15:26:13 by iarefeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && i + j < len)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	printf("%s\n", ft_strnstr(haystack, needle, 0));
	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s\n", ft_strnstr(haystack, "a", -1));
	printf("%s\n", ft_strnstr(haystack, "c", -1));
	printf("%s\n", ft_strnstr(empty, "", -1));
	printf("%s\n", ft_strnstr(empty, "", 0));
	printf("%s\n", ft_strnstr(empty, "coucou", -1));
	printf("%s\n", ft_strnstr(haystack, "aaabc", 5));
	printf("%s\n", ft_strnstr(empty, "12345", 5));
	printf("%s\n", ft_strnstr(haystack, "abcd", 9));
	printf("%s\n", ft_strnstr(haystack, "cd", 8));
	printf("%s\n", ft_strnstr(haystack, "a", 1));
	printf("%s\n", ft_strnstr("1", "a", 1));
	printf("%s\n", ft_strnstr("22", "b", 2));
	write(1, "\n", 1);
	return (0);
}*/
