/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:02:17 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/22 10:43:09 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *cur;
	t_list *next;
	t_list *result;

	if (!lst)
		return (NULL);
	cur = f(lst);
	if (!cur)
		return (NULL);
	result = cur;
	cur->next = NULL;
	lst = lst->next;
	while (lst)
	{
		next = f(lst);
		if (!next)
			return (NULL);
		next->next = NULL;
		cur->next = next;
		cur = next;
		lst = lst->next;
	}
	return (result);
}