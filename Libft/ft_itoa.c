/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:28:57 by iarefeva          #+#    #+#             */
/*   Updated: 2024/05/31 20:54:26 by iarefeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	long long	num;
	int	sign;
	int	len;
	int	i;
	

	len = 0;
	sign = 0;
	num = n;
	if (n <= 0)
	{
		len++;
		if (n == 0)
			return ft_strdup("0");
		if (n == INT_MIN)
			return ft_strdup("-2147483648");
		sign = 1;
		num = -(long long)n;
	}
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
	num = n;
	i = len - 1;
	while (num)
	{
		res[i--] = num % 10 + '0';
		num /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}