/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:05:49 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 15:53:54 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*next_elem;

	elem = ft_create_elem(data);
	next_elem = *begin_list;
	if (next_elem == 0)
		*begin_list = elem;
	else
	{
		while (next_elem->next)
			next_elem = next_elem->next;
		next_elem->next = elem;
	}
}
