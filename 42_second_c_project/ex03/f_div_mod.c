//This code defines a function ft_div_mod that takes two integers 
//and two pointers to integers as arguments and stores the result of 
//the integer division and modulus operations of 
//the first two integers in the memory pointed to by the two pointers respectively.


#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;
	int	y;

	x = a / b;
	y = a % b;
	*div = x;
	*mod = y;
}
