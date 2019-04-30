/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:30:24 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/07 22:57:06 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*q;

	q = 0;
	if (root == 0)
		return (0);
	if (root->left)
	{
		q = btree_search_item(root->left, data_ref, cmpf);
		if (q != 0)
			return (q);
	}
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->right)
	{
		q = btree_search_item(root->right, data_ref, cmpf);
		if (q != 0)
			return (q);
	}
	return (0);
}
