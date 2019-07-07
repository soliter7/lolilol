
#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *output;
	int i;

	i = 0;
	if ((output = malloc(sizeof(int) * length)) == NULL)
		return (0);
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
