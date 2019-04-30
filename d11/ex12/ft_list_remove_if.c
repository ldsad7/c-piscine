/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:11:33 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 23:36:39 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(void *, void *))
{
	t_list	*lst;
	t_list	*tmp;

	lst = *begin_list;
	while (lst)
	{
		if (((*cmp)(data_ref, lst->data) == 0) && lst)
		{
			*begin_list = lst->next;
			tmp = lst;
			free(tmp);
			lst = *begin_list;
		}
		else if (((*cmp)(data_ref, lst->next->data) == 0) && lst)
		{
			tmp = lst->next;
			lst->next = lst->next->next;
			free(tmp);
			lst = lst->next;
		}
	}
}
