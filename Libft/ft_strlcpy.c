/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:21:20 by iarefeva          #+#    #+#             */
/*   Updated: 2024/05/31 16:21:01 by iarefeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	int	len;

	char scr[] = "Hello!";
	char dest[20] = "Bye!";
	printf("%s\n", scr);	
	printf("%s\n", dest);
	ft_strlcpy(dest, scr, 7);
	printf("%s\n", scr);	
	printf("%s\n", dest);
	len = ft_strlcpy(dest, scr, 7);
	printf("%d", len);	
	return (0);
}*/
