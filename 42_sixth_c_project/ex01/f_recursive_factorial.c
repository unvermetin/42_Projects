//This code calculates the factorial of a given number recursively,
//returns 1 if the number is 0 or 1, and returns 0 for negative numbers.

int	ft_recursive_factorial(int nb)
{
	int	fak;

	fak = 1;
	if (nb > 1)
	{
		fak = nb * ft_recursive_factorial(nb - 1);
		return (fak);
	}
	else if (nb >= 0)
	{
		return (fak);
	}
	else
		return (0);
}
