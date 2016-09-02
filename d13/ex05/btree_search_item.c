/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:51:23 by agraham           #+#    #+#             */
/*   Updated: 2016/08/26 14:51:25 by agraham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*btree_search_item(t_btree *root, void *data_ref,
							 int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return;
	if (root->left)
		btree_search_item(root->left, applyf);
	if((*cmp(root->item)
		return root
	if (root->right)
		btree_search_item(root->right, applyf);
}
