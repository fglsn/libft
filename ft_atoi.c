/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:58:44 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/04 20:04:06 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

static int	check_sign(const char **c)
{
	if (**c == '+')
	{
		(*c)++;
		return (1);
	}
	else if (**c == '-')
	{
		(*c)++;
		return (-1);
	}
	return (1);
}

int	check_overflow(long result, int sign)
{
	long	long_max;
	long	long_min;

	long_max = (2 >> 31) - 1;
	long_min = -(2 >> 31);
	if (result < 0)
	{
		if (sign > 0)
			return ((int)long_max);
		else
			return ((int)long_min);
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (!str[i])
	{
		return (0);
	}
	while (ft_isspace(str[i]))
		i++;
	sign = check_sign(&str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result < 0)
		{
			return (check_overflow(result, sign));
		}
		i++;
	}
	return (result * sign);
}
