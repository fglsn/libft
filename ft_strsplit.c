/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:58:36 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/12 13:34:49 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char del)
{
	size_t	i;
	size_t	word;
	size_t	word_count;

	i = 0;
	word = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != del)
		{
			word++;
			if (word == 1)
			{
				word_count++;
			}
		}
		else
			word = 0;
		i++;
	}
	return (word_count);
}

static size_t	ft_word_length(char const *s, size_t i, char del)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != del)
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_strcpy_split(char *dst, const char *src, size_t i, char del)
{
	size_t	n;

	n = 0;
	while (src[i] && src[i] != del)
	{
		dst[n++] = src[i++];
	}
	dst[n] = '\0';
	return (i);
}

char	**ft_split(char *s, char c, char **result)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!(ft_word_length(s, i, c)))
			return (result);
		result[j] = malloc(sizeof(char *) * (ft_word_length(s, i, c) + 1));
		if (!result[j])
			return (NULL);
		if (s[i])
		{
			i = ft_strcpy_split(result[j], s, i, c);
			j++;
		}
		result[j] = 0;
	}
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**result;

	result = NULL;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	result = ft_split((char *)s, c, result);
	return (result);
}
