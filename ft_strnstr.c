/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:10 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/12 21:47:43 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (stack_len < needle_len)
		return (NULL);
	while (i <= stack_len - needle_len)
	{
		if (!ft_memcmp(haystack + i, needle, needle_len))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
