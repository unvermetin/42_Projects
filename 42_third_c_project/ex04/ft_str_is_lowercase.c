//This code checks whether a given string contains only lowercase characters.

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	rvalue;

	i = 0;
	rvalue = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			rvalue = 0;
		}
		i++;
	}
	return (rvalue);
}
