//This code defines a function to print a pattern made of 
//characters based on input dimensions.

#include<unistd.h>

void	ft_putchar(char c);

void	check_if(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || (j == 1 && i == y))
	{
		ft_putchar('A');
	}
	else if ((j == x && i == y && x > 1 && y > 1) || (j == x && i == 1))
	{
		ft_putchar('C');
	}
	else if (j == 1 || j == x || i == 1 || i == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1)
	{
		write(1, "x cannot be less than 1.\n", 26);
	}
	if (y < 1)
	{
		write(1, "y cannot be less than 1.\n", 26);
	}
	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			check_if(i, j, x, y);
			j++;
		}
		j = 1;
		i++;
		ft_putchar('\n');
	}
}
