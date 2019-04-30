/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:54:39 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/07 23:10:11 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (root == 0 || (root->right == 0 && root->left == 0))
		return (0);
	left = 1;
	right = 1;
	if (root->left)
		left += btree_level_count(root->left);
	if (root->right)
		right += btree_level_count(root->right);
	if (right >= left)
		return (right);
	else
		return (left);
}
