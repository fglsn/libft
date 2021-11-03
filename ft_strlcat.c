/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:11:17 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/03 18:26:45 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset = dst_len;
	while (src[i] != '\0' && offset != dstsize - 1)
	{
		dst[offset] = src[i];
		offset++;
		i++;
	}
	dst[offset] = '\0';
	return (dst_len + src_len);
}
