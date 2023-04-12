//This code defines the rush function which prints a rectangle made up of
//characters '-' on the top and bottom rows, '|' on the left and right columns,
//and ' ' (space) in between. The corners are represented by the character 'o'.
//The function takes two integer arguments, x and y, 
//which represent the width and height of the rectangle, respectively.

#include<unistd.h>

void	ft_putchar(char c);

void	check_if(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || (j == x && i == y)
		|| (j == 1 && i == y) || (j == x && i == 1))
	{
		ft_putchar('o');
	}
	else if (i == 1 || i == y)
	{
		ft_putchar('-');
	}
	else if (j == 1 || j == x)
	{
		ft_putchar('|');
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
