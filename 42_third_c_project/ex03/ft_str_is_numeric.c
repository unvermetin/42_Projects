//This code checks whether a given string contains only numeric characters.

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	rvalue;

	i = 0;
	rvalue = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			rvalue = 0;
		}
		i++;
	}
	return (rvalue);
}
