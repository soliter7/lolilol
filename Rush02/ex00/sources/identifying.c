#include "functions.h"

void	init_charset(char *charset)
{
	int	i;

	i = 0;
	while (i < 7)
		charset[i++] = '.';
	charset[i] = '\0';
}

int		is_valid_colle(char **input)
{
	int		x;
	int		y;
	int		first_line;

	x = 0;
	first_line = -1;
	while (input[x])
	{
		y = 0;
		while (input[y])
			y++;
		if (first_line == -1)
			first_line = y;
		else if (first_line != y)
			return (0);
		x++;
	}
	return (first_line != -1);
}

int		identify_colle(t_tab file)
{
	char	charset[8];

	if (!is_valid_colle(file.input))
		return (0);
	init_charset(charset);
	charset[0] = file.input[0][0];
	if (file.max_width > 1)
	{
		charset[1] = file.input[0][file.max_width - 1];
		if (file.max_width > 2)
			charset[4] = file.input[0][1];
	}
	if (file.length > 1)
	{
		charset[2] = file.input[file.length - 1][0];
		if (file.max_width > 1)
			charset[3] = file.input[file.length - 1][file.max_width - 1];
		if (file.length > 2)
		{
			charset[5] = file.input[1][0];
			if (file.max_width > 2)
				charset[6] = file.input[1][1];
		}
	}
	return (get_colle(file, charset));
}

int		get_colle(t_tab file, char *charset)
{
	int	colle;

	colle = 0;
	if (match_strings(charset, "oooo-| "))
		colle |= COLLE00;
	if (match_strings(charset, "/\\\\/** "))
		colle |= COLLE01;
	if (match_strings(charset, "AACCBB "))
		colle |= COLLE02;
	if (match_strings(charset, "ACACBB "))
		colle |= COLLE03;
	if (match_strings(charset, "ACCABB "))
		colle |= COLLE04;
	if (find_character(charset, '.', 4) == -1)
	{
		colle |= COLLE_RECTANGLE;
		if (file.length == file.max_width)
			colle |= COLLE_SQUARE;
	}
	return (colle);
}
