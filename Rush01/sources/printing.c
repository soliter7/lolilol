#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		print_sudoku(char **sudoku)
{
	int i;
	int x;

	if (sudoku == 0)
		return (0);
	x = 0;
	while (x < 9)
	{
		i = 0;
		while (i < 9)
		{
			ft_putchar(sudoku[x][i]);
			if (i + 1 != 9)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		x++;
	}
	return (1);
}
