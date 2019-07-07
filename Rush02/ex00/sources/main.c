#include "functions.h"

t_tab	read_input(void)
{
	int		i;
	int		x;
	char	*tmp;
	char	**input;
	t_tab	tab;

	tab.length = -1;
	if ((tmp = read_file(0)) == NULL)
		return (tab);
	if ((input = split(tmp)) == NULL)
		return (tab);
	tab.input = input;
	tab.max_width = 0;
	i = -1;
	while (input[++i])
	{
		x = 0;
		while (input[i][x])
			x++;
		if (x > tab.max_width)
			tab.max_width = x;
	}
	tab.length = i;
	free(tmp);
	return (tab);
}

int		main(void)
{
	int		colle;
	t_tab	file;

	file = read_input();
	if (file.length == -1)
		return (0);
	colle = identify_colle(file);
	print_colle(file, colle);
	return (0);
}
