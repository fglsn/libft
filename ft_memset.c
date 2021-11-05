/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:03:38 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/05 12:45:08 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;
	unsigned char	*beg;
	size_t			i;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	beg = ptr;
	i = 0;
	while (i < len)
	{
		*ptr = value;
		ptr++;
		i++;
	}
	return (beg);
}
