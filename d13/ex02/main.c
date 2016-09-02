#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);
void btree_apply_infix(t_btree *root, void (*applyf)(void *));

void printlist(void *item)
{
	printf("list: %s\n",item);
}

int main(void)
{
	t_btree *new = btree_create_node("F");
	new->left = btree_create_node("B");
	new->left->right = btree_create_node("D");
	new->left->right->left = btree_create_node("C");
	new->left->right->right = btree_create_node("E");
	new->left->left = btree_create_node("A");
	new->right= btree_create_node("G");
	new->right->right= btree_create_node("I");
	new->right->right->left= btree_create_node("H");

	btree_apply_infix(new, &printlist);
	/*printf("new list: %s\n",new->item);
	printf("new->left  %s\n",new->left->item);
	printf("new->left->left %s\n",new->left->left->item);
	printf("new->right %s\n",new->right->item);
	printf("new->right->left%s\n",new->right->left->item);*/
}