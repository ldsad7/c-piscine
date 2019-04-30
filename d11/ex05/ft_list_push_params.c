/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:17:36 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 21:01:59 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	t_list	*lst;
	int		i;

	lst = 0;
	i = 0;
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = lst;
		lst = elem;
		i++;
	}
	return (lst);
}
