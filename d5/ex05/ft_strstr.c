
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i2;

	i = 0;
	while (str[i] != '\0')
	{
		i2 = 0;
		while (str[i + i2] == to_find[i2] && str[i + i2])
			i2++;
		if (to_find[i2] == '\0')
			return (str + i);
		i++;
	}
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	return ((void*)0);
}
