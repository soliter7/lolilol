char	*ft_strncpy(char *dest, char *src, int dest_len)
{
	int	i;

	i = 0;
	while (src[i] && i < dest_len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		match_strings(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i] && s1[i] != '.')
			return (0);
		i++;
	}
	return (1);
}
