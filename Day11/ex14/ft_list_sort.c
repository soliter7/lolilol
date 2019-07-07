#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	void	*tmp;

	if (begin_list == 0 || (current = *begin_list) == 0)
		return ;
	while (current->next != 0)
	{
		while (cmp(current->data, current->next->data) > 0)
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = *begin_list;
		}
		current = current->next;
	}
}
