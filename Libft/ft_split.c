/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarefeva <iarefeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:28:57 by iarefeva          #+#    #+#             */
/*   Updated: 2024/05/31 19:16:40 by iarefeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char c)
{
	int	i;
	int	word;
	int in_word;

	i = 0;
	word = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && in_word == 0)
		{
			in_word = 1;
			word++;
		}
		else if (str[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (word);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	
	str = (char *)malloc(n + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_count;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	word_count = count_word((char *)s, c);
	if (!s)
		return (NULL);
	res = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[j] = ft_strndup(s + start, i - start);
			if (!res[j])
			{
				while (j > 0)
					free(res[--j]);
				free(res);
				return (NULL);
			}
			j++;
		}
	}	
	res[j] = NULL;
	return (res);
}