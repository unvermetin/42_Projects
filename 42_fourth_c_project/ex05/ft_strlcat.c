//This code works as strlcat function.

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizesrc;
	unsigned int	sizedest;
	unsigned int	sizedest1;

	i = 0;
	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	sizedest1 = sizedest;
	if (size < 1)
		return (sizesrc + size);
	while (src[i] && sizedest1 < size - 1)
	{
		dest[sizedest1] = src[i];
		sizedest1++;
		i++;
	}
	dest[sizedest1] = '\0';
	if (size < sizedest1 - 1)
		return (sizesrc + size);
	else
		return (sizesrc + sizedest1);
}
