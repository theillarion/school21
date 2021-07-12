#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left_size;
	int	rigth_size;

	if (root == NULL)
		return (0);
	else
	{
		if (root->left != NULL)
			left_size = btree_level_count(root->left);
		else
			left_size = -1;
		if (root->right != NULL)
			rigth_size = btree_level_count(root->right);
		else
			rigth_size = -1;
	}
	if (left_size > rigth_size)
		return (left_size + 1);
	else
		return (rigth_size + 1);
}
