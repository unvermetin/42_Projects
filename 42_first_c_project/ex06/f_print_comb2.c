//A function that prints all possible combinations 
//of two digits between 00 and 99 listed in ascending order on the screen.

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		while (b <= 99)
		{
			if (b > a)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				ft_putchar(' ');
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				if (a != 98)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		b = a;
		a++;
	}
}
