//This code calculates the power of a given number recursively.

int	ft_recursive_power(int nb, int power)
{
	int	sayi;

	sayi = nb;
	if (power >= 1)
	{
		sayi = nb * ft_recursive_power(nb, power - 1);
		return (sayi);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (0);
}
