//This code writes the given character.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
