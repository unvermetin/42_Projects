//This code computes the result of raising an integer to a given power using iteration.

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power >= 1)
	{
		while (power > 1)
		{
			nb = nb * p;
			power--;
		}
		return (nb);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (0);
}
