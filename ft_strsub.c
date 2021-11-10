/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:46:01 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/10 15:08:16 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (!s || (ft_strlen(s) < start + len))
	{
		return (NULL);
	}
	substring = ft_strnew(len);
	if (!substring)
		return (NULL);
	while (len)
	{
		substring[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (substring);
}
