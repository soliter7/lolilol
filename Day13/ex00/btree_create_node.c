#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *output;

	output = malloc(sizeof(t_btree));
	if (output != NULL)
	{
		output->left = 0;
		output->right = 0;
		output->item = item;
	}
	return (output);
}
