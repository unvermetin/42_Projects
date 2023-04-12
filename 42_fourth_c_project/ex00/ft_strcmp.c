//This code works as strcmp function.

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] == s1[i] && (s2[i] != '\0' || s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
