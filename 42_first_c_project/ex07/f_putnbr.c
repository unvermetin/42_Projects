//This code gives output exactly same of given integer.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 100)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else if (nb >= 10 && nb < 100)
	{
		ft_putchar (nb / 10 + 48);
		ft_putchar (nb % 10 + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
