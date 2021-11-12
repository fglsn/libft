/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:26:11 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/12 16:33:18 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_do_itoa(char *result, size_t num_len, long nbr)
{
	result[num_len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	num_len--;
	while (num_len >= 0 && nbr != 0)
	{
		result[num_len] = '0' + nbr % 10;
		nbr /= 10;
		num_len--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	size_t	num_len;
	char	*result;
	long	nbr;

	nbr = (long)n;
	num_len = ft_numlen(nbr);
	result = ft_strnew(num_len);
	if (!result)
		return (0);
	result = ft_do_itoa(result, num_len, nbr);
	return (result);
}
