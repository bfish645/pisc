/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 12:14:59 by agraham           #+#    #+#             */
/*   Updated: 2016/08/26 13:11:15 by agraham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
