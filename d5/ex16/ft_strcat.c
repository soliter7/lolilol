
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int offset;

	offset = 0;
	while (dest[offset] != '\0')
		offset++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = '\0';
	return (dest);
}
