#include "ft_btree.h"

t_btree	*btree_create_node(void	*item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree != NULL)
		return (tree);
	tree->item = item;
	tree->left = NULL;
	tree->right = NULL;
	return (tree);
}
