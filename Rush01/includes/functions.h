#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	ft_putchar(char c);
void	print(char *str);
void	fill_case(char **sudoku, int n, int *result, char ***output);
void	destroy_sudoku(char **sudoku);
char	**copy_sudoku(char **sudoku);
int		print_sudoku(char **sudoku);
int		are_arguments_valid(char **sudoku);
int		is_number_missing(char **sudoku, int line, int column, char nbr);
int		occurence_in_line(char *line, char nbr);
int		occurence_in_column(char **sudoku, int column, char nbr);
int		occurence_in_grid(char **sudoku, int line, int column, char nbr);

#endif
