/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:22:05 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/05 17:38:43 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char		ch;
	size_t				i;
	
	i = 0;
	str = (unsigned char*)s;
	ch = (unsigned char)c;
	
	while (n > i)
	{
		if (*str == ch)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
