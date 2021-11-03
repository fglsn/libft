/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:30:11 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/03 19:28:26 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*ptr;
	
	ch = (char)c;
	ptr = NULL;
	while (*s)
	{
		if (*s == ch)
		{
			ptr = s;
		}
		s++;
	}
	if (*s == '\0' && ch == '\0')
	{
		return ((char *)s);
	}
	return ((char *)ptr);
}