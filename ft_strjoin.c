/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:03:32 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/10 17:15:42 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*start;

	if (!s1 && !s2)
		return (NULL);
	result = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!result)
		return (NULL);
	start = result;
	if (s1)
	{
		while (*s1)
		{
			*result++ = *s1++;
		}
	}
	if (s2)
	{
		while (*s2)
		{
			*result++ = *s2++;
		}
	}
	return (start);
}
