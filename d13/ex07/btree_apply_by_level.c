/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 23:12:37 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/07 23:42:23 by tsimonis         ###   ########.fr       */
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

void	btree_apply_infix(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem),
		int cur_level, int level)
{
	if (root == 0)
		return ;
	if (root->left)
		btree_apply_infix(root->left, applyf, cur_level + 1, level);
	if (cur_level == level)
		applyf(root->item, cur_level, 0);
	if (root->right)
		btree_apply_infix(root->right, applyf, cur_level + 1, level);
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	i;
	int	max_level;

	i = 0;
	max_level = btree_level_count(root);
	while (i < max_level)
	{
		btree_apply_infix(root, applyf, 0, i);
	}
}
