/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:11:38 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 18:50:45 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*next_elem;

	i = 0;
	next_elem = begin_list;
	while (i != nbr && next_elem)
	{
		next_elem = next_elem->next;
		i++;
	}
	if (i == nbr)
		return (next_elem);
	return (0);
}
