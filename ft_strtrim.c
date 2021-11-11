/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:12:43 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/11 14:46:25 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	ft_allspaces(char *str)
{
	while (*str)
	{
		if (!ft_isspace(*str))
			return (0);
		str++;
	}
	return (1);
}

static size_t	ft_calculate_start(const char *s, size_t len)
{
	size_t	start;

	start = 0;
	while (start < len && ft_isspace(s[start]))
	{	
		start++;
	}
	return (start);
}

static size_t	ft_calculate_finish(const char *s, size_t len)
{
	size_t	finish;

	finish = 0;
	while (len >= 1 && ft_isspace(s[len - 1]))
	{
		finish++;
		len--;
	}
	return (finish);
}

char	*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		finish;
	size_t		len;
	size_t		copy_len;
	char		*copy;

	len = ft_strlen(s);
	start = ft_calculate_start(s, len);
	finish = ft_calculate_finish(s, len);
	if (ft_allspaces((char *)s))
	{
		copy = ft_strnew(0);
		if (!copy)
			return (NULL);
		return (copy);
	}
	else
	{
		copy_len = ft_strlen(s) - start - finish;
		copy = ft_strnew(copy_len);
		if (!copy)
			return (NULL);
		ft_strncpy(copy, &s[start], copy_len);
		return (copy);
	}
}
