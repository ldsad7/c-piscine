/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 19:41:15 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/07 23:08:12 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*elem;
	t_btree	*prev;
	int		fl;

	elem = btree_create_node(item);
	if (*root == 0 || root == 0)
		*root = elem;
	else
	{
		fl = 0;
		while (*root != 0)
		{
			prev = *root;
			if (cmpf(elem->item, (*root)->item) >= 0 && ((fl = 1)))
				(*root) = (*root)->right;
			else if ((fl = 2))
				(*root) = (*root)->left;
		}
		if (fl == 1)
			prev->right = elem;
		else if (fl == 2)
			prev->left = elem;
	}
}
