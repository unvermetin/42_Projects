//This code works as strstr function.

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	same;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			same = 1;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					same = 0;
				i++;
			}
			if (same == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
