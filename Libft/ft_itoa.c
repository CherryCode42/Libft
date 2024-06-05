/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:28:57 by iarefeva          #+#    #+#             */
/*   Updated: 2024/06/05 18:06:22 by iarefeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		num;
	int		unsigned_num;
	int		negative;
	int		len;
	int		i;

	len = 0;
	negative = 0;
	num = n;
	if (n <= 0)
	{
		len++;
		if (n == 0)
			return ft_strdup("0");
		if (n == INT_MIN)
			return ft_strdup("-2147483648");
		negative = 1;
		num = - n;
	}
	unsigned_num = num;
	if (n == INT_MAX)
		return ft_strdup("2147483647");
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = len - 1;
	while (unsigned_num)
	{
		res[i--] = unsigned_num % 10 + '0';
		unsigned_num /= 10;
	}
	if (negative)
		res[0] = '-';
	return (res);
}
