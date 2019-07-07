
void	ft_putchar(char c);

void	print_hex(char value)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[value / 16]);
	ft_putchar(base[value % 16]);
}

void	*ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}
