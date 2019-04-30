/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:05:21 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 20:58:02 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*next_elem;

	next_elem = begin_list;
	if (next_elem == 0)
		return (next_elem);
	while (next_elem->next)
		next_elem = next_elem->next;
	return (next_elem);
}
