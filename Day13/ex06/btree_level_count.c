#include "ft_btree.h"

void	browse_tree(t_btree *root, int current_level, int *maxlevel)
{
	if (root == 0)
		return ;
	current_level++;
	browse_tree(root->left, current_level, maxlevel);
	if (current_level > *maxlevel)
		*maxlevel = current_level;
	browse_tree(root->right, current_level, maxlevel);
}

int		btree_level_count(t_btree *root)
{
	int level;

	level = 0;
	browse_tree(root, 0, &level);
	return (level);
}
