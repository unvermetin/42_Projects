//This code checks whether a given string contains only alphabetic characters.

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	rvalue;

	rvalue = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 64 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			rvalue = 0;
		}
		i++;
	}
	return (rvalue);
}
