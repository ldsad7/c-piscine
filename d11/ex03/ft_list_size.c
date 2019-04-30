/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:14:21 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 15:59:13 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 1;
	if (begin_list == 0)
		return (0);
	else
	{
		while (begin_list->next)
		{
			i++;
			begin_list = begin_list->next;
		}
		return (i);
	}
}
