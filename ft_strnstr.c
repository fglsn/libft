/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:10 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/04 20:50:36 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_match(const char *ptr, const char *needle, size_t needle_len)
{
	size_t	j;

	j = 0;
	while (ptr[j] == needle[j] && j < needle_len)
	{
		j++;
	}
	if (j == needle_len)
	{
		return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	stack_len;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	stack_len = ft_strlen(haystack);
	if (stack_len > len)
		stack_len = len;
	if (needle_len == 0)
		return ((char *)haystack);
	if (stack_len <= needle_len)
		return (NULL);
	while (i <= stack_len - needle_len)
	{
		if (check_match(haystack + i, needle, needle_len))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
