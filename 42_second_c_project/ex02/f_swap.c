//This code defines a function ft_swap that takes two pointers 
//to integers as arguments and swaps the values they point to.

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
