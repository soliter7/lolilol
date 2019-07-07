
int	ft_count_if(char **tab, int (*f)(char*))
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (tab[i])
	{
		count += f(tab[i]);
		i++;
	}
	return (count);
}
