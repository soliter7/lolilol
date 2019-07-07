t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*current;

	i = 0;
	current = begin_list;
	while (current != 0 && i < nbr)
	{
		current = current->next;
		i++;
	}
	return ((i == nbr) ? current : 0);
}
