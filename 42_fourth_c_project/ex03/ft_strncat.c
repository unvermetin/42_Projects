//This code works as strncat function.

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "metin";
	char dest[] = "unver";

	printf("%s", ft_strncat(dest, str, 9));
}