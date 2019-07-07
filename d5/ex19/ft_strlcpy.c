
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int srclen;

	i = 0;
	srclen = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
		srclen++;
	}
	while (src[srclen] != '\0')
		srclen++;
	dest[i] = '\0';
	return (srclen);
}
