/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:16:24 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/04 22:56:15 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		ch;
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	source = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src == ch)
		{
			*dest++ = *source++;
			return (dest);
		}
		*dest++ = *source++;
	}
	return (NULL);
}
