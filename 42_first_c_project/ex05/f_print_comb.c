//A function that prints all possible 
//combinations of three different digits listed in ascending order on the screen.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_if(char a, char b, char c)
{
	if (b > a && c > b)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_check_if(a, b, c);
				c++;
			}
			c = '2';
			b++;
		}
		b = '1';
		a++;
	}
}
