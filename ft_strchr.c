/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:33:51 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/03 18:26:19 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == '\0' && ch == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
