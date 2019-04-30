/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:29:02 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 21:06:06 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	int		i;
	t_list	*next_elem;
	t_list	*tmp;

	i = 0;
	if (*begin_list == 0 || (*begin_list)->next == 0)
		return ;
	next_elem = *begin_list;
	while ((next_elem->next)->next)
		next_elem = next_elem->next;
	tmp = next_elem->next;
	next_elem->next = 0;
	ft_list_reverse(begin_list);
	tmp->next = *begin_list;
	*begin_list = tmp;
	i++;
}
