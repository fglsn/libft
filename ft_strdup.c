/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:16:45 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/02 15:00:35 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*copy;

	len = ft_strlen(s1) + 1;
	copy = (char *)malloc(len * sizeof(char));
	if (!copy)
	{
		return (NULL);
	}
	return ((char *)ft_memcpy(copy, s1, len));
}
