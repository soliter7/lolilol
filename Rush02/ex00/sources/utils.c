#include "functions.h"

int		count_bits(int colle)
{
	int	count;

	count = 0;
	while (colle != 0)
	{
		count += colle & 1;
		colle >>= 1;
	}
	return (count);
}

int		find_character(char *str, char c, int end)
{
	while (--end >= 0)
	{
		if (str[end] == c)
			return (end);
	}
	return (-1);
}
