#include "ft_btree.h"

void	btree_apply_infix(t_btree	*root, void	(*applyf)(void *))
{
	if (root->left != NULL)
		btree_apply_infix(root->left, applyf);
	if (root != NULL)
		(*applyf)(root->item);
	if (root->right != NULL)
		btree_apply_infix(root->right, applyf);
}
