#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*current;

	current = begin_list;
	while (current != 0 && current->next != 0)
		current = current->next;
	return (current);
}
