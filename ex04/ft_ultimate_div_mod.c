#include <unistd.h>

void ft_ultimate_div_mode(int *a , int *b)
{
	int x = *a; 
	int y = *b;

	int p = x / y;
	int q = x % y;

	*a = &p;
	*b = &q;
}
	


