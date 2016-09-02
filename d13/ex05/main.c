#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);
void btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

int		ft_strcmp(void *s1, void *s2)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	a = s1;
	b = s2;
	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

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
	//new->right->right->left= btree_create_node("H");
	btree_insert_data(&new,"H", &ft_strcmp);
	btree_apply_suffix(new, &printlist);
	/*printf("new list: %s\n",new->item);
	printf("new->left  %s\n",new->left->item);
	printf("new->left->left %s\n",new->left->left->item);
	printf("new->right %s\n",new->right->item);
	printf("new->right->left%s\n",new->right->left->item);*/
}