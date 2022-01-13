/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:06:24 by ishakuro          #+#    #+#             */
/*   Updated: 2022/01/13 18:24:27 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This only valid if last element of the array was set to 0. 
 */

void	ft_printarray(char **content)
{
	if (!content)
		return ;
	while (*content)
	{
		ft_putendl(*content);
		content++;
	}
}
