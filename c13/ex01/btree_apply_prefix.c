#include "ft_btree.h"

void	btree_apply_prefix(t_btree	*root, void	(*applyf)(void *))
{
	if (root != NULL)
		(*applyf)(root->item);
	if (root->left != NULL)
		btree_apply_prefix(root->left, applyf);
	if (root->right != NULL)
		btree_apply_prefix(root->right, applyf);
}
