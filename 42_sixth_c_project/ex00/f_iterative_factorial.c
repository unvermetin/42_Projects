//This code calculates and returns the factorial 
//of a non-negative integer using an iterative approach.

int	ft_iterative_factorial(int nb)
{
	int	fak;

	fak = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			fak = fak * nb;
			nb--;
		}
		return (fak);
	}
	else
		return (0);
}
