//The function ft_fibonacci returns the Fibonacci number at the given index,
// or -1 if the index is negative.

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (index);
}
