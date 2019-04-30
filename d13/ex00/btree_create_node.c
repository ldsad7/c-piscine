/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 20:59:14 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/07 22:51:43 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*elem;

	elem = (t_btree *)malloc(sizeof(*elem));
	elem->right = NULL;
	elem->left = NULL;
	elem->item = item;
	return (elem);
}
