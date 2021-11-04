/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:58:44 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/04 17:36:26 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "limits.h"

static int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	long				result;
	int					sign;
	unsigned long long	maxlong;
	//long long minlong = -9223372036854775808;
	i = 0;
	sign = 1;
	result = 0;
	maxlong = 9223372036854775807U;
	if (!str[i])
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if ((unsigned long long)result > maxlong)
	{
		return (-1);
		//return ((sign > 0 ? (int)LONG_MAX : (int)LONG_MIN)); 
	}
	return (result * sign);
}
