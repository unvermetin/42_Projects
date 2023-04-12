//This code converts the first character of every word in a string
// from lowercase to uppercase.

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		big;
	char	a;

	i = 0;
	big = 1;
	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (big == 1 && a >= 'a' && a <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (a < 48 || (a > 57 && a < 65) || (a > 90 && a < 97) || a > 122)
		{
			big = 1;
		}
		else
			big = 0;
		i++;
	}
	return (str);
}
