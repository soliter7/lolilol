#include "ft_btree.h"

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root == 0)
		return ;
	applyf(root, 0, 0);
	btree_apply_by_level(root->left, applyf);
	btree_apply_by_level(root->right, applyf);
}
