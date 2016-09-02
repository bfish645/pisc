#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);

int main(void)
{
	t_btree *new = btree_create_node("hello");
	printf("new list: %s\n",new->item);
}