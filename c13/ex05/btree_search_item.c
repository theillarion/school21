#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	if (root->left != NULL)
		btree_search_item(root->left, data_ref, cmpf);
	if (root != NULL && (*cmpf)(root->item, data_ref) == 0)
		return (root->item);
	if (root->right != NULL)
		btree_search_item(root->right, data_ref, cmpf);
	return (NULL);
}
