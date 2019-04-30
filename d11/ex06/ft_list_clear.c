/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:33:47 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 21:11:30 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list != 0)
	{
		ft_list_clear(&((*begin_list)->next));
		(*begin_list)->next = 0;
		free(*begin_list);
	}
	*begin_list = 0;
}
