/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:04:13 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/08 12:13:53 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new_mem;

	new_mem = (char *)malloc(sizeof(char) * size);
	if (!new_mem)
	{
		return (NULL);
	}
	ft_bzero(new_mem, size);
	return (new_mem);
}
