/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:36:10 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/03 20:08:05 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	stack_len;
	int	needle_len;

	i = 0;
	stack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i <= stack_len - needle_len)
	{
		j = 0;
		while (haystack[j + i] == needle[j] && j < needle_len)
		{
			j++;
		}
		if (j == needle_len)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
