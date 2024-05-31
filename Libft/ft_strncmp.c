/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:08:51 by iarefeva          #+#    #+#             */
/*   Updated: 2024/05/27 19:36:11 by iarefeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
        int     a;

        a = ft_strncmp("Hello", "Hello", 5);
        printf("%d\n", a);
        a = ft_strncmp("Hello", "Hell", 5);
        printf("%d\n", a);
        a = ft_strncmp("Hell", "Hello", 5);
        printf("%d\n", a);
        a = ft_strncmp("Hallo", "Hella", 5);
        printf("%d\n", a);
        a = ft_strncmp("ello", "Hello", 5);
        printf("%d\n", a);
        
        return(0);
}*/
