/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 10:57:16 by agraham           #+#    #+#             */
/*   Updated: 2016/08/26 10:57:17 by agraham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = malloc(sizeof(t_btree));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
