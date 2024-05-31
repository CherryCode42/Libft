
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	i = 0;
	pdest = dest;
	psrc = src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}


char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*dup;

	len_s = ft_strlen(s);
	dup = malloc (len_s + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len_s);
	dup[len_s] = '\0';
	return (dup);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	num;
	int	sign;
	int len;
	int i;
	

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
		num = -n;
	}
	if (n == INT_MAX)
		return ft_strdup("2147483647");
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	res = (char *)malloc(len + sign + 1);
	if (!res)
		return (NULL);
	res[len + sign] = '\0';
	i = len;
	num = n;
	while (num)
	{

		res[i--] = num % 10 + '0';
		num /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}

int main()
{
	char *c = ft_itoa(-44552);

	printf("%s\n", c);
	return 0;
}