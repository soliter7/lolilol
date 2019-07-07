
char	*ft_strrev(char *str)
{
	int		end;
	int		i;
	char	tmp;

	end = 0;
	while (str[end])
		end++;
	end--;
	i = 0;
	while (i <= end / 2)
	{
		tmp = str[i];
		str[i] = str[end - i];
		str[end - i] = tmp;
		i++;
	}
	return (str);
}
