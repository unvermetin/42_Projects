//This code uses for write a char variable.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
