//This code checks whether a given character array contains only uppercase characters.

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	rvalue;

	i = 0;
	rvalue = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			rvalue = 0;
		}
		i++;
	}
	return (rvalue);
}
