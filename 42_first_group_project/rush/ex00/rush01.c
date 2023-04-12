//The updated rush function now correctly prints a rectangle with diagonal lines
//forming the corners. The check_if function has been updated to check for 
//the positions of the characters in the new design. The if-else conditions 
//now consider all four corners of the rectangle,
//and the characters used are '/' and '' instead of '|' and '-'. 

#include<unistd.h>

void	ft_putchar(char c);

void	check_if(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || (j == x && i == y && x > 1 && y > 1))
	{
		ft_putchar('/');
	}
	else if ((j == 1 && i == y) || (j == x && i == 1))
	{
		ft_putchar('\\');
	}
	else if (j == 1 || j == x || i == 1 || i == y)
	{
		ft_putchar('*');
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
