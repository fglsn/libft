/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:03:30 by ishakuro          #+#    #+#             */
/*   Updated: 2022/01/13 18:18:19 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	if (nb == 1)
		return (1);
	a = 2;
	while (a < 46341 && nb > a * a)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}
